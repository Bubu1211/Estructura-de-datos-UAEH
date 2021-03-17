#ifndef LISTA_H
#define LISTA_H

#include "Node.h"

template <class T> class Lista
{
    public:
        Lista();
        virtual ~Lista();

        void pushBack(T);
        void pushFront(T);
        void printLista();
        Node<T>* getFirstNode();
        Node<T>* getLastNode() ;
        T pop(int);
        Node<T>* getNextNode(int);
        Node<T>* getPrevNode(int);
        Node<T>* getNodeAt(int);
        int getSize();
        bool isEmpty();

        void bubble_sort();
        void quick_sort();
        void selection_sort();
        void merge_sort();
        void insertion_sort();

        int tam;

    private:

        Node <T> *top;
};

template<class T> Lista<T>::Lista()
{
    tam = 0;
    this->top = NULL;
}

template<class T> Lista<T>::~Lista()
{
    delete top;
}

template <class T> void Lista<T>::pushBack(T x)
{
    if(top == NULL){
        top = new Node<T>(x);
        top->next = NULL;
    }else{
        Node<T> *n1 = new Node<T>(x);
        getLastNode()->next = n1;
    }
    tam++;
}

template <class T> void Lista<T>::pushFront(T x)
{
    Node <T> *n = new Node<T>(x);
    n->next = top;
    top = n;
    tam++;
}

template <class T> void Lista<T>::printLista()
{
    Node <T> *i = top;

    while(i != NULL){
        std::cout<<i->value<< ", ";
        i = i->next;
    }
    std::cout<<"\n";
}

template <class T> Node<T>* Lista<T>::getFirstNode()
{
    return top;
}

template <class T> Node<T>* Lista<T>::getLastNode()
{
    Node <T> *i = top;

    while(i->next != NULL){
        i = i->next;
    }
    return i;
}

///retorna el valor y elimina el nodo segun el indice
template <class T> T Lista<T>::pop(int i)
{
    if(i<=tam && i>=1){
        Node<T> *n = getNodeAt(i);
        Node<T> *t = top;
        T x = n->value;

        if(n == top){
            top = n->next;
        }else{
            while(t->next != n){
                t = t->next;
            }
            t->next = n->next;
        }

        tam--;
        return x;
    }
    return -1;
}


template <class T> Node<T>* Lista<T>::getNextNode(int i)
{
    if(i<tam && i>=1){
        Node <T> *pNext = top;
        int j = 1;

        while(pNext->next != NULL && j<=i){
            pNext = pNext->next;
            j++;
        }
        return pNext;
    }
    ///si se excede del tamaño se retorna un nodo con valor de 0
    return new Node<T>(0);
}

template <class T> Node<T>* Lista<T>::getPrevNode(int i)
{

    if(i<=tam && i>1){
        Node <T> *pNext = top;
        int j = 1;

        while(pNext->next != NULL && j<i-1){
            pNext = pNext->next;
            j++;
        }
        return pNext;
    }
    ///si se excede del tamaño se retorna un nodo con valor de 0
}

template <class T> Node<T>* Lista<T>::getNodeAt(int i)
{
     if(i<=tam && i>=1){
        Node <T> *pNext = top;
        int j = 1;

        while(pNext->next != NULL && j<i){
            pNext = pNext->next;
            j++;
        }
        return pNext;
    }
    ///si se excede del tamaño se retorna un nodo con valor de 0
    return new Node<T>(0);
}

template <class T> int Lista<T>::getSize()
{
    return tam;
}

template <class T> bool Lista<T>::isEmpty()
{
    return (top == NULL);
}

template <class T> void Lista<T>::bubble_sort()
{
    T aux;
    for(int i = 1; i<tam; i++){
        for(int j = 1; j<tam-i+1; j++){
            if((getNextNode(j)->value)<(getNodeAt(j)->value)){
                aux = getNodeAt(j)->value;
                getNodeAt(j)->value = getNextNode(j)->value;
                getNextNode(j)->value = aux;
            }
        }
    }
}

template <class T> void Lista<T>::selection_sort()
{
    int indiceMenor, i, j;
    T menor = getNodeAt(1)->value;

    for(j = 1; j<tam; j++){
        for(i=j;i<tam; i++){
            if(getNodeAt(i)->value < menor){
                menor = getNodeAt(i)->value;
                indiceMenor = i+1;
            }
        }
        getNodeAt(indiceMenor)-> value = getNodeAt(j)->value;
        getNodeAt(j)->value = menor;
    }
}

template <class T> void Lista<T>::quick_sort()
{

}


template<class T> void Lista<T>::merge_sort()
{

}

template <class T> void Lista<T>::insertion_sort()
{

}

#endif // LISTA_H
