#include <iostream>
#include <conio.h>20

///prototipo de la función
void intercambio(int&, int&);

int main()
{
    ///apuntadores en memoria heap para usar en el programa, aun usando el pase por referencia
    int *n1 = new int;
    int *n2 = new int;

    std::cout<<"Ingrese dos numeros: "<<std::endl;
    std::cin>>*n1>>*n2;

    intercambio(*n1, *n2);  ///se realiza la llamada del intercambio

    ///se muestra el valor de las variables cambiadas
    std::cout<<"Valor actual del primer numero: "<<*n1<<std::endl;
    std::cout<<"Valor actual del segundo numero: "<<*n2<<std::endl;

    delete n1, n2;
    getch();
    return 0;
}

void intercambio(int &x, int &y)
{
    ///declaramos una variable temporal para guardar el valor de x
    int temp = x;
    x = y;
    y = temp;
}
