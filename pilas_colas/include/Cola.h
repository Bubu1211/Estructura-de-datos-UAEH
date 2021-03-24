#ifndef COLA_H
#define COLA_H

#include <Pila.h>

template <class T>class Node
{
    public:
        T value;
        Node *next;

        Node(T v) {
            value = v;
            next = NULL;
        }

        ~Node(){
            delete next;
        }
};

template <class T> class Cola
{
    public:
        int tam;
        Node<T> *inicio;
        Node<T> *fin;

        Cola() {
            tam = 0;
            inicio = fin = NULL;
        }

        void push(T x)
        {
            Node<T> *p = new Node<T>(x);
            if(inicio == NULL){
                inicio = fin = p;
            }else{
                inicio->next = p;
                inicio = p;
            }
            tam++;
        }

        T pop()
        {
            T r = fin->value;
            fin = fin->next;
            if(fin == NULL){
                inicio = NULL;
            }
            tam--;
            return r;
        }

        T top()
        {
            T r = fin->value;
            return r;
        }

        T back()
        {
            T r = inicio->value;
            return r;
        }

        void print()
        {
            Node<T> *p = fin;
            while(p != NULL){
                std::cout<<p->value<<"\n";
                p = p->next;
            }
        }

        void clear()
        {
            Node<T> *p = fin;
            while(fin != NULL){
                fin = fin->next;
            }
        }

        bool empty()
        {
            return tam == 0;
        }

        int getSize()
        {
            return tam;
        }


};

#endif // COLA_H
