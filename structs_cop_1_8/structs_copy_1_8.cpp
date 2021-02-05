#include <iostream>
#include <conio.h>

using namespace std;

///declaración de una estructura
struct Persona{
    char nombre[20];
    int edad;
}
persona1; ///crea variables de tipo estructura

int main()
{
    cout<<"Nombre: ";
    ///accede a atributos de persona 1
    cin.getline(persona1.nombre, 20, '\n');
    cout<<"Edad: ";
    cin>>persona1.edad;

    ///muestra datos
    cout<<"\nImprimiendo dato\n";
    cout<<"Nombre: "<<persona1.nombre<<endl;
    cout<<"Edad: "<<persona1.edad<<endl;

    getch();
    return 0;
}
