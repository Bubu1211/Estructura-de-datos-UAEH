#include <iostream>
#include <list>
#include <string>

void mostrar_lista(std::list<std::string>&);
bool have_space(const std::string&);

int main()
{
    std::list<std::string> x;

    x.push_back("Pedro");
    x.push_back("Eden");
    x.push_back("Maria Martínez");
    x.push_front("Laura");

    std::cout<<"Tamano de la lista: "<<x.size() <<"\n\n";
    std::cout<<"Lista: \n";
    mostrar_lista(x);

    std::cout<<"\n";

    x.sort();
    std::cout<<"Lista ordenada: \n";
    mostrar_lista(x);

    ///función remove_if: elimina elementos segun una aseveracion lógica que se le mande como
    ///parametro, en este caso, si el string tienen espacios con la funcion: have_space
    x.remove_if(have_space);
    std::cout<<"\nLista despues de metodo remove_if, elimina elementos con espacios \n";
    mostrar_lista(x);

    ///Función splice: introduce una lista dentro de otra
    std::list<std::string> lista2;
    for(int i = 0; i<3; i++) lista2.push_back("elemento ");  ///llena la lista 2

    std::cout<<"Lista 2: \n";
    mostrar_lista(lista2);

    ///introducimos la lista2 en la lista x en el final, se necesita un iterador
    std::list<std::string>::iterator it = x.end();
    x.splice(it, lista2);

    std::cout<<"Contenido lista x despues de splice: \n";
    mostrar_lista(x);


    return 0;
}

///función que muestra el contenido de una lista
void mostrar_lista(std::list<std::string> &lista)
{
    std::list<std::string>::iterator it;

    for(it = lista.begin(); it != lista.end(); it++){
        std::cout<<" "<<*it<<", ";
    }
    std::cout<<"\n\n";
}

///función que se envia como parametro al método de la clase list remove_if
bool have_space(const std::string &value)
{
    std::string::const_iterator it;
    for( it = value.begin(); it != value.end(); it++)
        if(*it == ' ') return true;

    return false;
}
