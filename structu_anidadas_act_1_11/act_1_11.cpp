#include <iostream>

struct Direccion{
    std::string calle;
    int numero;
    std::string colonia;
};

struct Persona{
    std::string nombre;
    Direccion direccion;
};

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    Persona *p = new Persona;

    ///solicitamos entrada del usuario
    std::cout<<"Ingrese el nombre: ";
    getline(std::cin, p->nombre);
    fflush(stdin);
    std::cout<<"Ingrese la colonia donde vive: ";
    getline(std::cin, p->direccion.colonia);
    fflush(stdin);
    std::cout<<"Ingrese la calle donde vive: ";
    getline(std::cin, p->direccion.calle);
    fflush(stdin);
    std::cout<<"Ingrese el número de su dirección: ";
    std::cin>> p->direccion.numero;

    system("cls"); ///limpiamos la consola

    ///mostramos la información
    std::cout<<"Datos de la persona...\n";
    std::cout<<"Nombre: "<<p->nombre<<"\n";
    std::cout<<"Dirección...\n";
    std::cout<<"Colonia: "<<p->direccion.colonia<<"\n";
    std::cout<<"Calle: "<<p->direccion.calle<<"\n";
    std::cout<<"Número: "<<p->direccion.numero<<"\n";

    return 0;
}
