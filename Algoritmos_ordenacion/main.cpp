#include <iostream>
#include "Lista.h"

int menu();
void titulo(std::string);

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    Lista<int> x;
    int opcion, v;

    do{
        system("cls");
        opcion = menu();

        switch(opcion){
            case 1:
                titulo("1. Insertar un elemento (inserción posterior)");
                std::cin>>v;
                x.pushBack(v);
                break;

            case 2:
                titulo("2. Ingresa elemento (Inserción anterior)");
                std::cin>>v;
                x.pushFront(v);
                break;

            case 3:
                titulo("3. Eliminar elemento: inserte el índice del elemento que desea borrar");
                std::cin>>v;
                std::cout<<"Elmento eliminado: "<<x.pop(v)<<"\n";
                break;

            case 4:
                titulo("4. Ver lista ");
                x.printLista();
                break;

            case 5:
                titulo("5. Ordenar por Bubble Sort");
                x.bubble_sort();
                break;
            case 6:
                titulo("6. Ordenar por quicksort");
                x.quick_sort(x.getSize());
                break;
            case 7:
                titulo("7. Ordenar por Selection Sort");
                x.selection_sort();
                break;

            case 8:
                break;
            case 9:
                titulo("9. Ordenar por Insertion Sort");
                x.insertion_sort();
                break;

            case 10:
                titulo("Tamaño lista: ");
                std::cout<<x.tam;
                break;

            case 11:
                titulo("Fin del programa");
                return 0;
                break;

            default:
                titulo("No se reconoce una opción, intente de nuevo");
        }
        system("pause");
    }while(opcion != 11);

    return 0;
}

int menu()
{
    int r;
    std::cout<<"\t Tipo de dato de lista enlazada: int \n";
    std::cout<<"1. Ingresa elemento (inserción posterior) \n";
    std::cout<<"2. Ingresa elemento (Inserción anterior) \n";
    std::cout<<"3. Eliminar elemento \n";
    std::cout<<"4. Ver lista \n";
    std::cout<<"5. Ordenar por Bubble Sort \n";
    std::cout<<"6. Ordenar por quicksort \n";
    std::cout<<"7. Ordenar por Selection Sort \n";
    std::cout<<"8. Ordenar porMerge Sort \n";
    std::cout<<"9. Ordenar por Insertion Sort \n";
    std::cout<<"10. Ver tamaño \n";
    std::cout<<"11. Salir \n";
    std::cin>>r;
    return r;
}

void titulo(std::string s)
{
    system("cls");
    std::cout<<s<<"\n\n";
}
