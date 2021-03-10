#include <iostream>

struct Automovil{
    std::string placa;
    std::string marca;
    int modelo;
    int n_puertas;
    float potencia; ///tipo float por la unidad de medida HorsePower
};

int main()
{
    Automovil tu_coche, mi_coche = {"ZLS-0291", "General Motors Chevrolet", 2009, 2, 144.7};
    Automovil *coche = &tu_coche; ///apuntador a variables tipo automovil

    std::cout<<"Ingrese las especificaciones de su vehículo: "<<std::endl;
    std::cout<<"Ingrese la matrícula: ";
    getline(std::cin, coche->placa);
    std::cout<<"Ingrese la marca: ";
    getline(std::cin, coche->marca);
    std::cout<<"Ingrese el modelo: ";
    std::cin>>coche->modelo;
    std::cout<<"Ingrese el número de puertas: ";
    std::cin>>coche->n_puertas;
    std::cout<<"Ingrese la potencia: ";
    std::cin>>coche->potencia;

    system("cls"); ///limpia la consola

    ///imprime valores de la variable tu_carro a traves del apuntador
    std::cout<<"Tu coche..."<<std::endl<<std::endl;
    std::cout<<"Placa: "<<coche->placa<<std::endl;
    std::cout<<"Marca: "<<coche->marca<<std::endl;
    std::cout<<"Modelo: "<<coche->modelo<<std::endl;
    std::cout<<"Número de puertas: "<<coche->n_puertas<<std::endl;
    std::cout<<"Potencia: "<<coche->potencia<<std::endl;

    ///imprime valores de var mi_coche, reasignando el apuntador
    coche = &mi_coche;
    std::cout<<"Mi coche..."<<std::endl<<std::endl;
    std::cout<<"Placa: "<<coche->placa<<std::endl;
    std::cout<<"Marca: "<<coche->marca<<std::endl;
    std::cout<<"Modelo: "<<coche->modelo<<std::endl;
    std::cout<<"Número de puertas: "<<coche->n_puertas<<std::endl;
    std::cout<<"Potencia: "<<coche->potencia<<std::endl;

    return 0;
}
