#include <iostream>
#define size 2

struct Direccion{
    std::string colonia;
    std::string calle;
    int numero;
};

struct Alumno{
    std::string nombre;
    Direccion direccion;
    int calificaciones[3];
};

double getPromedio(Alumno&);

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    Alumno *alumnos = new Alumno[size];

    for(int i = 0; i<size; i++)
    {
        fflush(stdin);
        std::cout<<"Ingrese el nombre del estudiante "<<i+1<<": ";
        getline(std::cin, alumnos[i].nombre);
        fflush(stdin);
        std::cout<<"Ingrese la colonia donde vive: ";
        getline(std::cin, alumnos[i].direccion.colonia);
        fflush(stdin);
        std::cout<<"Ingrese la calle donde vive: ";
        getline(std::cin, alumnos[i].direccion.calle);
        fflush(stdin);
        std::cout<<"ingrese el número de su vivienda: ";
        std::cin>>alumnos[i].direccion.numero;

        for(int j = 0; j<3; j++){
            std::cout<<"Ingrese la calificación: "<<j+1<<": ";
            std::cin>>alumnos[i].calificaciones[j];
        }
        std::cout<<"\n";
    }

    system("cls");

    for(int i = 0; i<size; i++)
    {
        std::cout<<"El nombre del estudiante "<<i+1<<" es: "<<alumnos[i].nombre<<"\n";
        std::cout<<"La colonia donde vive es: "<<alumnos[i].direccion.colonia<<"\n";
        std::cout<<"La calle donde vive es: "<<alumnos[i].direccion.calle<<"\n";
        std::cout<<"El número de su vivienda es: "<<alumnos[i].direccion.numero<<"\n";

        for(int j = 0; j<3; j++)
            std::cout<<"La calificación: "<<j+1<<" es: "<<alumnos[i].calificaciones[j]<<"\n";

        std::cout<<"EL promedio del alumno es: "<<getPromedio(alumnos[i])<<"\n\n";
    }

    delete [] alumnos;
    return 0;
}

double getPromedio(Alumno &alumno)
{
    double suma = 0.0;

    for(int i = 0; i<3; i++)
        suma+=alumno.calificaciones[i];

    return (double)suma/3;
}
