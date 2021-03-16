#include "node.h"

template <class T>Node<T>::Node(T value)
{
    //ctor
}

template <class T>Node<T>::~Node()
{
    delete this->value;
}
