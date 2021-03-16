#ifndef NODE_H
#define NODE_H

template <class T> class Node
{
    public:
        Node<T>(T value);
        ~Node<T>();

    private:
        T *value;
        Node <T> *next;
};

#endif // NODE_H
