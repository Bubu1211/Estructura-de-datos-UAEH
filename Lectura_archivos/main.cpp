///lectura en un archivo de texto
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>

void lectura();

int main()
{
    lectura();
    return 0;
}

void lectura(){
    std::ifstream archivo;
    std::string texto;

    archivo.open("programacion.txt", std::ios::in);

    if(archivo.fail()){
       std::cout<<"No se pudo abrir el archivo ";
        exit(1);
    }

    while(!archivo.eof()){
        getline(archivo, texto);
        std::cout<<texto<<std::endl;
    }

    archivo.close();
}
