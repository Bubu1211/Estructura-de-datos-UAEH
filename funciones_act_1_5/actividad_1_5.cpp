#include <iostream>
#include <conio.h>

///prototipos de función
double operacion(int,int,char);

int main()
{
    ///variables apuntador que toman memoria dinámica, aun usando el pase parametros por valor
    int *n1 = new int;
    int *n2 = new int;
    char *op = new char;

    ///se solicita la entrada al usuario
    std::cout<<"Ingrese dos números..."<<std::endl;
    std::cin>>*n1>>*n2;

    ///se solicita el tipo de operación
    std::cout<<"Ingrese el tipo de operación que quiere realizar: +,-,*,/ "<<std::endl;
    std::cin>>*op;

    ///se manda a llamar la función enviando los parametros por valor
    std::cout<<"El resultado de la operación es: "<<operacion(*n1, *n2, *op);

    ///se libera la memoria de las variables
    delete n1, n2, op;
    getch();
    return 0;
}

///definición de la función
double operacion(int x, int y, char o)
{
    /*a traves de la estructura selectiva  se ejecuta la operación deseada
    se hace la multiplicación por 1.0 para hacer la conversión de tipos */
    switch(o){
        case '+':
            return (1.0)*x+y;
        case '-':
            return 1.0*x-y;
        case '*':
            return 1.0*x*y;
        case '/':
            if (y != 0) return (1.0*x)/y;   ///se hace la sentencia para evitar una excepción con division por 0
            else return -1;
        default:
            return 0;  ///retorno en caso de que no se haya elegido correctamente la opción de operación
    }
}
