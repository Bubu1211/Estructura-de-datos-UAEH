#ifndef NODE_A_H
#define NODE_A_H

#include <Cola.h>

template<class T> class Node_a{
    public:
        T data;
        Node_a<T> *left;
        Node_a<T> *right;

        Node_a(T data){
            this->data = data;
            right = NULL;
            left = NULL;
        }

        ~Node_a(){
            delete right;
            delete left;
        }

        void preOrder(Node_a<T> *r)
        {
            if(r == NULL) return;

            std::cout<<r->data<<", ";
            preOrder(r->left);
            preOrder(r->right);
        }

        void inOrder(Node_a<T> *r)
        {
            if(r == NULL) return;

            inOrder(r->left);
            std::cout<<r->data<<", ";
            inOrder(r->right);
        }

        void postOrder(Node_a<T> *r)
        {
            if(r == NULL) return;

            postOrder(r->left);
            postOrder(r->right);
            std::cout<<r->data<<", ";
        }

        ///recorrido por niveles
        void amplitud(Node_a<T> *r)
        {
            Cola<Node_a<T>*> *c = new Cola<Node_a<T>*>;
            Node_a<T> *aux = r;

            if(aux){
                c->push(aux);
                while(!c->empty()){
                    aux = c->pop();
                    std::cout<<aux->data<<", ";
                    if(aux->left) c->push(aux->left);
                    if(aux->right) c->push(aux->right);

                }
            }
            delete c;
        }
};

#endif // NODE_A_H
