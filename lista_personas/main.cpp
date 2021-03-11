#include <iostream>
#include <list>
#include "persona.h"

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    std::list<persona> x;
    persona *aux;
    char opc;

    do
    {
        system("cls");
        std::cout<< "Lista dinámica \n\n";
        std::cout<< "1. Añadir elemento \n";
        std::cout<< "2. Mostrar lista \n";
        std::cout<< "3. Ordenar lista \n";
        std::cout<< "4. Salir \n\n";

        std::cout<<"Opcion: ";
        std::cin>> opc;
        std::cout<<"\n";

        switch(opc)
        {
            case '1':
            {
                aux = new persona;
                aux->leer_datos();
                x.push_back(*aux);
                delete aux;
            }
            break;

            case '2':
            {
                std::list<persona>::iterator it;
                for(it = x.begin(); it != x.end(); it++)
                    it->imprimir_datos();
            }
            break;

            case '3':
                x.sort();
                break;
            case '4':
                std::cout<<"Saliendo...";
                break;
            default:
                std::cout<< "Opcion no valida, intente de nuevo";
        }
        std::cout<<"\n\n";
        system("pause");
    }
    while(opc != '4');
    return 0;
}
