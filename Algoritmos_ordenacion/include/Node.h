#ifndef NODE_H
#define NODE_H

#include <iostream>

template <class T> class Node
{
    public:
        T value;
        Node <T> *next;

        Node<T>(T value);
        Node<T>();
        ~Node<T>();

};

template <class T>Node<T>::Node(T value)
{
    this->value = value;
    next = NULL;
}

template <class T>Node<T>::Node()
{
    next = NULL;
}

template <class T>Node<T>::~Node()
{
    delete next;
}

#endif // NODE_H
