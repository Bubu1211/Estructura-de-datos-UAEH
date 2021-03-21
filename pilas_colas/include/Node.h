#ifndef NODE_H
#define NODE_H


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

#endif // NODE_H
