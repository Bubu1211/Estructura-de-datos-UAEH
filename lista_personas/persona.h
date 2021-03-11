#ifndef PERSONA_H
#define PERSONA_H

#include<iostream>

///clase Persona, persona.h
class persona
{
    public:
        persona();
        void leer_datos();
        void imprimir_datos();
        bool operator <(persona &p);

    protected:

    private:
        std::string apellido_paterno;
        std::string apellido_materno;
        std::string nombre;
        int edad;

};

#endif // PERSONA_H
