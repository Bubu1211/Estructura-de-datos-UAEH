#include <iostream>
#include "persona.h"

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    persona *x = new persona;

    x->leer_datos();
    std::cout<<std::endl;
    x->imprimir_datos();

    delete x;
    return 0;
}
