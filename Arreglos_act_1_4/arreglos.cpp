#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numeros[] = {1,2,3,4,5}; ///define el vector tipo int
    int suma = 0; ///var acumuladora para la suma

    ///ciclo que itera sobre el arreglo y suma sus elementos
    for(int i = 0; i<5; i++)
    {
        suma += numeros[i];
    }
    cout<<"La suma de los elementos del vector es: "<<suma<<endl;

    getch(); ///evita que se cierre la consola
    return 0;
}
