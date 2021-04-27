#include <iostream>
#include <fstream>

void escribir(std::string, std::string);

int main()
{
    std::string nombre, contenido;

    std::cout<<"Ingrese el nombre del archivo: ";
    getline(std::cin, nombre);
    std::cout<<"Ingrese el contenido que desea en el archivo: \n";
    getline(std::cin, contenido);

    escribir(nombre, contenido);

    return 0;
}

void escribir(std::string nombre, std::string contenido)
{
    std::ofstream archivo;

    archivo.open(nombre, std::ios::out);

    if(archivo.fail()){
         std::cout<<"No se puede abrir el archivo";
         std::exit(1);
    }

    archivo<<contenido;

    archivo.close();
}
