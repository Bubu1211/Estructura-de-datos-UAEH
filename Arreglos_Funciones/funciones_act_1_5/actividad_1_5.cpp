#include <iostream>
#include <conio.h>

///prototipos de funci�n
double operacion(int,int,char);

int main()
{
    ///variables apuntador que toman memoria din�mica, aun usando el pase parametros por valor
    int *n1 = new int;
    int *n2 = new int;
    char *op = new char;

    ///se solicita la entrada al usuario
    std::cout<<"Ingrese dos n�meros..."<<std::endl;
    std::cin>>*n1>>*n2;

    ///se solicita el tipo de operaci�n
    std::cout<<"Ingrese el tipo de operaci�n que quiere realizar: +,-,*,/ "<<std::endl;
    std::cin>>*op;

    ///se manda a llamar la funci�n enviando los parametros por valor
    std::cout<<"El resultado de la operaci�n es: "<<operacion(*n1, *n2, *op);

    ///se libera la memoria de las variables
    delete n1, n2, op;
    getch();
    return 0;
}

///definici�n de la funci�n
double operacion(int x, int y, char o)
{
    /*a traves de la estructura selectiva  se ejecuta la operaci�n deseada
    se hace la multiplicaci�n por 1.0 para hacer la conversi�n de tipos */
    switch(o){
        case '+':
            return (1.0)*x+y;
        case '-':
            return 1.0*x-y;
        case '*':
            return 1.0*x*y;
        case '/':
            if (y != 0) return (1.0*x)/y;   ///se hace la sentencia para evitar una excepci�n con division por 0
            else return -1;
        default:
            return 0;  ///retorno en caso de que no se haya elegido correctamente la opci�n de operaci�n
    }
}
