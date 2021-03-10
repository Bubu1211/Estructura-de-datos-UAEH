#include "persona.h"

persona::persona()
{
    apellido_paterno = "sin valor asignado";
    apellido_materno = "sin valor asignado";
    nombre = "sin valor asignado";
    edad = 0;
}

void persona::leer_datos()
{
    std::cout<<"Introduce los datos...\n";
    std::cout<<"Apellido paterno: ";
    getline(std::cin, apellido_paterno);
    std::cout<<"Apellido materno: ";
    getline(std::cin, apellido_materno);
    std::cout<<"Nombre: ";
    getline(std::cin, nombre);
    std::cout<<"Edad: ";
    std::cin>>edad;
}

void persona::imprimir_datos()
{
    std::cout<< apellido_paterno<<" "<< apellido_materno<<" "<< nombre<<", "<< edad <<" años \n";
}
