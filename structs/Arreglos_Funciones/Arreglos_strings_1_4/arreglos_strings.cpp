#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    string palabras[5], busqueda;  ///arreglo tipo string y var para la busqueda

    ///solicitamos y almacenamos palabras en el arreglo
    for(int i = 0; i<5; i++)
    {
        cout<<"Ingrese una palabra: "<<endl;
        getline(cin, palabras[i]);
        fflush(stdin); ///limpia el flujo de entrada
    }

    cout<<"\nIngresa la palabra que desea buscar"<<endl;
    getline(cin, busqueda);

    ///ciclo para comparar el string busqueda con cada elemento del arreglo
    for(int i = 0; i<5; i++)
    {
        if(busqueda == palabras[i]){
            cout<<"la palabra \""<<busqueda<< "\" SI se encuentra almacenada en el arreglo"<<endl;
            break;
        }
        ///si se llega al fin del ciclo entonces muestra que no se encuentra
        else if(i == 4)
            cout<<"la palabra \""<<busqueda<<"\" NO se encuentra almacenada en el arreglo"<<endl;
    }

    ///Otra posible solución para buscar la palabra en el arreglo:
    string mensaje; ///a traves de una variable mensaje
    for(int i = 0; i<5; i++)
    {
        if(busqueda == palabras[i]){
            mensaje = "La palabra \""+busqueda+"\" si se encuentra en el arreglo";
            break;
        }
        ///si se llega al fin del ciclo entonces muestra que no se encuentra
        else
            mensaje = "La palabra \""+busqueda+"\" NO se encuentra en el arreglo";
    }
    cout<<endl<<mensaje<<endl;

    getch();
    return 0;
}
