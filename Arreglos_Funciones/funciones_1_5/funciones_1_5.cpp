///directivas del procesador
#include <iostream>
#include <conio.h>

using namespace std;

///Prototipos de funci�n
int encontrarMax(int x, int y);

int main()
{
    int n1, n2;
    int mayor;
    cout<<"Digite dos n�meros"<<endl;
    cin>>n1>>n2;

    cout<<"El mayor de los 2 n�meros es: "<<encontrarMax(n1, n2)<<endl;

    getch();
    return 0;
}

///definciones de funci�n
int encontrarMax(int x, int y)
{
    int numMax;

    if(x>y){
        numMax = x;
    }else{
        numMax = y;
    }
    return numMax;
}
