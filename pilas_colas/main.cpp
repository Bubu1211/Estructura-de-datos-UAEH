#include <iostream>
#include <Pila.h>
#include <Cola.h>

int menu();
void titulo(std::string);
void palindromo();
void expresion();

int main()
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

    return 0;
}

int menu()
{
    int op;
    std::cout<<"1. Palíndromo act 8\n";
    std::cout<<"2. Expresión act 9\n";
    std::cout<<"3. Salir \n";
}

void titulo(std::string msg)
{
    system("cls");
    std::cout<<msg<<"\n";
}

void palindromo()
{

}
void expresion()
{

}

/*

    int opcion;

    do{
        switch(opcion = menu){
            case 1:
                titulo("Palindromo");
                break;
            case 2:
                titulo("Expresion");
                break;
            case 3:
                titulo("Fin del programa");
                return 0;
            default:
                titulo("No se reconoce la opción, intente de nuevo");
        }
        system("pause");
    }while(opcion != 3);
*/
