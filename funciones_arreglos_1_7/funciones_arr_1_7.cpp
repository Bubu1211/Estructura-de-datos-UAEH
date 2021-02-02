#include <iostream>

///prototipo de función
int menor(int[], int);

int main()
{
    const int *size = new int(6);   ///define el tamaño = 6
    int *arreglo = new int[10];     ///define el arreglo a traves de un apuntador

    ///solicita los elementos del arreglo al usuario
    for(int i = 0; i<*size; i++){
        std::cout<<"Ingrese un número: "<<std::endl;
        std::cin>>arreglo[i];
    }
    ///se ejecuta el método menor y lo muestra en pantalla
    std::cout<<"El menor número es: "<<menor(arreglo, *size);

    delete arreglo, size;
    return 0;
}

int menor(int arr[], int tam){
    int menor = arr[0]; ///variable que almacena el valor menor

    ///busca si otro elemento es menor al definido, de ser asi, lo asgina
    for(int i = 0; i<tam; i++)
        if(arr[i]<menor)
            menor = arr[i];

    return menor;
}
