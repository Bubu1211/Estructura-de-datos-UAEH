#ifndef LISTA_H
#define LISTA_H


class Lista
{
    public:
        Lista(int);
        void agregar_elemento();
        void mostrar_lista();

    protected:

    private:
        int *a;
        int n;
        int MAX;
};

#endif // LISTA_H
