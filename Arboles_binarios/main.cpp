#include <iostream>
#include <Node_a.h>
#include <Cola.h>

int main()
{
    ///árbol de la página 6 del archivo de arbole binarios 11
    Node_a<char> *root = new Node_a<char>('s');

    root->left = new Node_a<char>('f');
    root->left->left = new Node_a<char>('z');
    root->left->right = new Node_a<char>('m');
    root->right = new Node_a<char>('q');
    root->right->left= new Node_a<char>('x');
    root->right->right = new Node_a<char>('l');

    std::cout<<"Pre orden: \n";
    root->preOrder(root);
    std::cout<<std::endl;

    std::cout<<"In orden: \n";
    root->inOrder(root);
    std::cout<<std::endl;

    std::cout<<"Post orden: \n";
    root->postOrder(root);
    std::cout<<std::endl;

    std::cout<<"Por amplitud: \n";
    root->amplitud(root);
    std::cout<<std::endl;


    return 0;
}

///recorrrido en preOrden

