#include <iostream>

struct Empleado{
    std::string nombre;
    std::string rfc;
    int salario;
};

int main()
{
    ///puntero en la memoria dinámica que contiene un arreglo
    Empleado *empleados = new Empleado[5];

    ///solicita entrada de datos
    std::cout<<"Ingrese la informacion\n\n";

    for(int i = 0; i<5; i++){
        fflush(stdin); ///limpieza del buffer de entrada
        std::cout<<"Ingrese el nombre del empleado "<<i+1<<": ";
        getline(std::cin, empleados[i].nombre);
        std::cout<<"Ingrese el RFC del empleado "<<i+1<<": ";
        getline(std::cin, empleados[i].rfc);
        std::cout<<"Ingrese el Salario del empleado "<<i+1<<": ";
        std::cin>>empleados[i].salario;
        std::cout<<"\n";
    }

    std::cout<<"Procesando...";
    system("pause"); ///espera a que el usuario continue con el flujo del programa
    system("cls"); ///limpieza de la pantalla

    ///muestra los datos en pantalla
    for(int i = 0; i<5; i++){
        std::cout<<"Empleado "<<i+1<<"\n";
        std::cout<<"Nombre: "<<empleados[i].nombre;
        std::cout<<"  RFC: "<<empleados[i].rfc;
        std::cout<<"  Salario: "<<empleados[i].salario;
        std::cout<<"\n";
    }

    delete empleados;
    return 0;
}
