#include "Lista.h"

Lista::Lista(int tamanio)
{
    a = new int[tamanio];
    n = 0;
    MAX = tamanio;
}

void Lista::agregar_elemento()
{
    if(n < MAX)
    {
        std::cout<<"Introduce el nuevo elemento: ";
        cin>> a[n++];
        std::cout<<"Elemento añadido exitosamente: ";
    }else
        cout<< "Lista llena...";
}

void Lista::mostrar_lista()
{
    if(n == 0)
        std::cout<<"Lista vacía ";
    else
    {
        std::cout<<"Lista... \n";
        for(int i = 0; i<n ; i++)
            std::cout<<a[i]<<"\n";
    }
}
