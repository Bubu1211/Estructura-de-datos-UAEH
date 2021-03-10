#include "Lista.h"
#include <iostream>

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
        std::cin>> a[n++];
        std::cout<<"Elemento añadido exitosamente \n";
    }else
        std::cout<< "Lista llena...";
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

///ordenar por método de la burbuja
void Lista::ordenar()
{
    std::cout<<n<<std::endl;
    int aux;
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1-i; j++){  ///se reducen iteraciones
            if(a[j+1] < a[j]){
                aux =  a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
            }
        }
    }
}
