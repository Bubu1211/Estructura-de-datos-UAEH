///lectura en un archivo de texto
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>

void lectura();

int main()
{
    try{
        lectura();
    }catch(int error){
        std::cout<<"Error: "<<error;
    }
    return 0;
}

void lectura(){
    std::ifstream archivo;
    std::string texto;

    archivo.open("programacion.txt", std::ios::in);

    if(archivo.fail()) throw 999;

    while(!archivo.eof()){
        getline(archivo, texto);
        std::cout<<texto<<std::endl;
    }

    archivo.close();
}
