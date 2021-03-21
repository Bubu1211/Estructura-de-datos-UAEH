#ifndef PILA_H
#define PILA_H

#include <Node.h>

template<class T> class Pila
{
    public:
        Pila(){
            last = NULL;
            tam = 0;
        }

        ///introduce
        void push(T x)
        {
            Node <T> *p = new Node<T>(x);
            p->next = last;
            last = p;
            tam++;
        }

        ///devuelve el �ltimo valor y elimina el nodo
        T pop()
        {
            tam--;
            if(last != NULL) {
                T r = last->value;
                last = last->next;
                return r;
            }
            else
                std::cout<<"Pila vac�a...\n";
        }

        ///Devuelve el �ltimo valor sin
        T top()
        {
            if(last != NULL) return last->value;
        }

        void print()
        {
            Node <T> *p = last;

            while(p != NULL){
                std::cout<<p->value<<"\n";
                p = p->next;
            }
        }

        void clear()
        {
            while(last != NULL){
                last = last->next;
            }
        }

        int getSize()
        {
            return tam;
        }

        bool empty()
        {
            return tam == 0;
        }

    private:
        int tam;
        Node<T> *last;
};

#endif // PILA_H
