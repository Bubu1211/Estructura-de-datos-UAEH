#include <iostream>
#include <conio.h>

using namespace std;

void valNuevo(int&, int&);

int main()
{
    int num1, num2;

    cout<<"Digite dos números"<<endl;
    cin>>num1>>num2;

    valNuevo(num1, num2);

    cout<<"El nuevo valor del primer número es: "<<num1<<endl;
    cout<<"El nuevo valor del segundo número es: "<<num2<<endl;

    getch();
    return 0;
}

void valNuevo(int &xnum, int &ynum){
    cout<<"El valor del primer número es: "<<xnum<<endl;
    cout<<"El valor del segundo número es: "<<ynum<<endl;

    xnum = 89;
    ynum = 85;
}
