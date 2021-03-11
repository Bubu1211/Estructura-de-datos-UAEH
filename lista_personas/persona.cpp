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
    fflush(stdin);
    std::cout<<"Introduce los datos...\n";
    std::cout<<"Apellido paterno: ";
    getline(std::cin, apellido_paterno);
    fflush(stdin);
    std::cout<<"Apellido materno: ";
    getline(std::cin, apellido_materno);
    fflush(stdin);
    std::cout<<"Nombre: ";
    getline(std::cin, nombre);
    fflush(stdin);
    std::cout<<"Edad: ";
    std::cin>>edad;
}

void persona::imprimir_datos()
{
    std::cout<< apellido_paterno<<" "<< apellido_materno<<" "<< nombre<<", "<< edad <<" años \n";
}

///sobrecarga de operador para el método sort en la lista
bool persona::operator <(persona &p)
{
    if(this->apellido_paterno > p.apellido_paterno)
        return false;
    if(this->apellido_paterno == p.apellido_paterno && this->apellido_materno > p.apellido_materno)
        return false;
    if(this->apellido_paterno == p.apellido_paterno && this->apellido_materno == p.apellido_materno && this->nombre > p.nombre)
        return false;

    return true;
}
