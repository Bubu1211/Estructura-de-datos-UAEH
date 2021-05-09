#include <iostream>
#include <cstdio>

struct Empleado{
    char nombre[20];
    float sueldo;
};

void guardar_registro();
void leer_registros();

int main()
{
    char opc;

    do{
        system("cls");
        std::cout<<"Seleccione una opción..."<<std::endl;
        std::cout<<"1. Guardar Registro"<< std::endl;
        std::cout<<"2. Leer registros "<<std::endl;
        std::cout<<"3. Salir "<<std::endl;
        std::cout<<"Ingrese: ";
        std::cin>> opc;

        try{
            switch(opc)
            {
                case '1': guardar_registro(); break;
                case '2': leer_registros(); break;
            }
        }catch(int error){
            std::cout<<"Error en archivo, code: "<<error;
        }

        system("pause");

    }while(opc != '3');
}

void guardar_registro()
{
    FILE *arch;
    Empleado e;

    std::cout<<"Nombre: ";
    std::cin>>e.nombre;
    std::cout<<"Sueldo: ";
    std::cin>>e.sueldo;

    arch = fopen("empleados.ssrb", "ab");

    if(arch == NULL) throw 999;

    fwrite(&e, sizeof(Empleado),1,arch);

    std::cout<<"Registro hecho con éxito "<<std::endl;

    fclose(arch);
}

void leer_registros()
{
    FILE *arch;
    Empleado e;

    arch = fopen("empleados.ssrb", "rb");

    if(arch == NULL) throw 999;

    std::cout<<"Leyendo archivo"<<std::endl;
    while(fread(&e,sizeof(Empleado),1,arch)!=0){
        std::cout<<"Nombre: "<<e.nombre<<"\n";
        std::cout<<"Sueldo: $"<<e.sueldo<<"\n";
    }
    fclose(arch);
}
