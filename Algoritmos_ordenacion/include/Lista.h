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

    private:
        int size;
        Node <T> *top;
};

template<class T> Lista<T>::Lista()
{
    size = 0;
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
        size++;
    }else{
        Node<T> *n1 = new Node<T>(x);
        getLastNode()->next = n1;
        size++;
    }
}

template <class T> void Lista<T>::pushFront(T x)
{
    Node <T> *n = new Node<T>(x);
    n->next = top;
    top = n;
    size++;
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
    if(i<=size && i>=1){
        T x = getNodeAt(i)->value;
        getPrevNode(i)->next = getNextNode(i);
        size--;
        return x;
    }
}


template <class T> Node<T>* Lista<T>::getNextNode(int i)
{
    if(i<size && i>=1){
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

    if(i<size && i>=1){
        Node <T> *pNext = top;
        int j = 1;

        while(pNext->next != NULL && j<i-1){
            pNext = pNext->next;
            j++;
        }
        return pNext;
    }
    ///si se excede del tamaño se retorna un nodo con valor de 0
    return new Node<T>(0);
}

template <class T> Node<T>* Lista<T>::getNodeAt(int i)
{
     if(i<size && i>=1){
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
    return size;
}

template <class T> bool Lista<T>::isEmpty()
{
    return (top == NULL);
}

template <class T> void Lista<T>::bubble_sort()
{

}

template <class T> void Lista<T>::quick_sort()
{

}

template <class T> void Lista<T>::selection_sort()
{

}

template<class T> void Lista<T>::merge_sort()
{

}

template <class T> void Lista<T>::insertion_sort()
{

}

#endif // LISTA_H
