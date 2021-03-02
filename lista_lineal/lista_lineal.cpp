#include <iostream>
#include "Lista.h"

char mostrarMenu();
void mostrarTitulo(std::string);

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    char seguir;

    Lista x(4);

    do{

        seguir = mostrarMenu();

        switch(seguir){

            case 'A': case 'a':
                mostrarTitulo("A�adir elemento");
                x.agregar_elemento();
                break;

            case 'B': case 'b':
                mostrarTitulo("Mostrar lista");
                x.mostrar_lista();
                break;

            case 'C': case 'c':
                mostrarTitulo("Ordenar lista");
                x.ordenar();
                break;

            case 'S': case 's':
                mostrarTitulo("Saliendo Gracias por usar el programa ");
                std::cout<<((char)169)<<"C�sar Lazcano";
                return 0;

            default:
                mostrarTitulo("No se reconoce ninguna opci�n, intente de nuevo");
        }
        system("pause");

    }while(seguir != 's' || seguir != 'S');

    return 0;
}

char mostrarMenu()
{
    char opcion;
    system("cls");

    std::cout<<"A�adir elemento..............A\n";
    std::cout<<"Mostrar lista................B\n";
    std::cout<<"Ordenar lista................C\n";
    std::cout<<"Salir........................S\n";
    std::cout<<"Ingrese una opci�n: ";
    std::cin>>opcion;

    return opcion ;
}

void mostrarTitulo(std::string titulo)
{
    ///system("cls");
    std::cout<<titulo<<"\n";
}
