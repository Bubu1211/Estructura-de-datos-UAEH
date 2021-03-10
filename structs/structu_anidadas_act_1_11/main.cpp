#include <iostream>

struct Direccion{
    std::string calle
    int numero;
    std::string colonia;
};

struct Persona{
    std::string nombre;
    Direccion direccion;
};

int main()
{
    return 0;
}
