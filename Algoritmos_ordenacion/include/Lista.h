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
        void quick_sort(int, int);
        void selection_sort();
        void merge_sort(int);
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
    if(i<=tam && i>=1 && !isEmpty()){
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
     T menor;

    for(j = 1; j<tam; j++){
       menor = getNodeAt(j)->value;
        for(i=j;i<tam; i++){
            if(getNextNode(i)->value < menor){
                menor = getNextNode(i)->value;
                indiceMenor = i+1;
                getNodeAt(indiceMenor)-> value = getNodeAt(j)->value;
                getNodeAt(j)->value = menor;
            }
        }
    }
}


template <class T> void Lista<T>::insertion_sort()
{
    int i, j, iteraciones;
    T aux;
    for(i = 1; i<=tam; i++){
        aux = getNodeAt(i)->value;
        j=i;
        while(j>1 && aux<getPrevNode(j)->value){
            getNodeAt(j)->value = getPrevNode(j)->value;
            getPrevNode(j)->value = aux;
            j--;
            iteraciones++;
        }
        getNodeAt(j)->value = aux;
    }
    std::cout<<"iteraciones: "<<iteraciones;
}

template <class T> void Lista<T>::quick_sort(int inicio, int fin)
{
    int indicePivote = (inicio+fin)/2;
    T pivote= getNodeAt(indicePivote)->value;

    int i=inicio, j=fin;

    while(i<=j){
        while(getNodeAt(i)->value<pivote) i++;
        while(getNodeAt(j)->value>pivote) j--;

        if(i<=j){
            T aux = getNodeAt(i)->value;
            getNodeAt(i)->value = getNodeAt(j)->value;
            getNodeAt(j)->value = aux;
            i++;
            j--;
        }
    }
    if(j>inicio) quick_sort(inicio, j);
    if(i<fin) quick_sort(i, fin);
}


template<class T> void Lista<T>::merge_sort(int indiceMedio)
{
    if(indiceMedio == 1){
        if(getNodeAt(indiceMedio+1)->value<getNodeAt(indiceMedio)->value){
            T aux = getNodeAt(indiceMedio+1)->value;
            getNodeAt(indiceMedio+1)->value = getNodeAt(indiceMedio)->value ;
            getNodeAt(indiceMedio)->value = aux;
        }
    }else if(indiceMedio != 0){
        merge_sort(indiceMedio/2);
        int i = 1+indiceMedio+indiceMedio/2;
        if(getNodeAt(i+1)->value<getNodeAt(i)->value){
            T aux = getNodeAt(i+1)->value;
            getNodeAt(i+1)->value = getNodeAt(i)->value ;
            getNodeAt(i)->value = aux;
        }
    }
}


#endif // LISTA_H
