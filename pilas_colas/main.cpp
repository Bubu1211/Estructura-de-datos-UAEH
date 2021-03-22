#include <iostream>
#include <math.h>
#include <Pila.h>
#include <Cola.h>

int menu();
void titulo(std::string);
void inicio();
void palindromo();
void expresion();

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    int opcion;

    do{
        switch(opcion = menu()){
            case 1:
                titulo("Inicio uso de Pilas y Colas");
                inicio();
                break;
            case 2:
                titulo("Palindromo");
                palindromo();
                break;
            case 3:
                titulo("Expresion");
                expresion();
                break;
            case 4:
                titulo("Fin del programa");
                return 0;
            default:
                titulo("No se reconoce la opción, intente de nuevo");
        }
        system("pause");
    }while(opcion != 4);



    return 0;
}

int menu()
{
    int op;
    system("cls");
    std::cout<<"1. Inicio act 7\n";
    std::cout<<"2. Palíndromo act 8\n";
    std::cout<<"3. Expresión act 9\n";
    std::cout<<"4. Salir \n";
    std::cin>>op;
    return op;
}

void titulo(std::string msg)
{
    system("cls");
    std::cout<<msg<<"\n";
}

void inicio()
{
    Pila<double> x;

    std::cout<<"Tamaño de la pila: "<< x.getSize() <<"\n";

    x.push(2.5);
    x.push(4.9);
    x.push(7.3);

    std::cout<<"Tamaño de la pila: "<<x.getSize()<<"\n";


    x.print(); ///equivalente al siguiente ciclo
    ///método top solo regresa el valor, método pop regresa el valor y elimina la cima
    while(!x.empty()){
        std::cout<<"Cima: "<<x.pop()<<"\n";
    }
    std::cout<<"Tamaño de la pila: "<<x.getSize()<<"\n";

    std::cout<<"Cola ...\n";

    Cola<std::string> y;

    y.push("donald");
    y.push("hugo");
    y.push("paco");
    y.push("luis");

    std::cout<<"Tamaño de la cola "<<y.getSize()<<"\n";

    std::cout<<"Frente: "<<y.top()<<"\n";
    std::cout<<"Inicio: "<<y.back()<<"\n";

    y.print();

    while(!y.empty()){
        std::cout<<"Eliminando: "<<y.pop()<<"\n";
    }

    std::cout<<"Tamaño de la cola "<<y.getSize()<<"\n";
}

void palindromo()
{
    std::string palabra;
    bool es_palindromo = true;
    Pila<char> pila;
    Cola<char> cola;

    fflush(stdin);
    std::cout<<"Ingrese palabra a analizar: ";
    getline(std::cin, palabra);

    for(int i = 0; i<palabra.length(); i++)
    {
        if(isalpha(palabra[i])){
            pila.push(tolower(palabra[i]));
            cola.push(tolower(palabra[i]));
        }
    }
    for(int i = 0; i<pila.getSize(); i++){
        if(pila.pop() != cola.pop()){
            es_palindromo = false;
            break;
        }
    }
    if(es_palindromo) std::cout<<"La palabra es: "<<palabra<<"\nSi es palíndromo \n";
    else std::cout<<"La palabra es: "<<palabra<<"\nNo es palíndromo \n";

}
void expresion()
{
    std::string expresion;
    Pila<double> x;

    std::cout<<"Ingresa la expresión en notación posfija: ";
    std::cin>>expresion;

    for(int i = 0; i<expresion.length(); i++){
        if(isdigit(expresion[i])){
                x.push(expresion[i]-48);
        }else{
            double oD = x.pop();
            double oI = x.pop();

            switch(expresion[i]){
                case '+':  x.push(oI+oD);
                    break;
                case '-':  x.push(oI-oD);
                    break;
                case '*':  x.push(oI*oD);
                    break;
                case '/':  x.push(oI/oD);
                    break;
                case '^':  x.push(pow(oI,oD));
                    break;
            }
        }
    }
    std::cout<<"\nResultado: "<<x.top()<<"\n";
}

/*

*/
