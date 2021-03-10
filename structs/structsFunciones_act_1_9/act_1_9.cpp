#include <iostream>

struct Alumno{
    std::string nombre;
    int calificaciones[3];
};

///prototipo de funci�n
double getPromedio(Alumno*);

int main()
{
    Alumno *alumno = new Alumno; ///uso de memoria din�mica con tipo alumno

    std::cout<<"Ingrese el nombre del estudiante: ";
    getline(std::cin, alumno->nombre);
    std::cout<<"Ingrese las 3 calificaciones a continuaci�n: "<<std::endl;

    ///ciclo para leer las tres notas
    for(int i = 0; i<3; i++){
        std::cout<<"Ingrese calificaci�n "<<i+1<<": ";
        std::cin>>alumno->calificaciones[i];
    }

    ///se ejecuta la funci�n y se obtiene el promedio
    std::cout<<"El promedio de "<<alumno->nombre<<" es: "<<getPromedio(alumno);

    delete alumno;
    return 0;
}

///parametros por referencia usando un puntero y no una direcci�n
double getPromedio(Alumno *a)
{
    int suma = 0; ///var acumuladora

    for(int i = 0; i<3; i++)
        suma+=a->calificaciones[i];

    return (double)suma/3; ///parseo de int a double
}
