#include <iostream>

class Cuenta_Bancaria
{
private:
    int num_cuenta;
    std::string nombre;
    double saldo;
public:
    Cuenta_Bancaria();
    void deposito(double);
    void retiro(double);
    void consulta_saldo();
};

Cuenta_Bancaria::Cuenta_Bancaria(){
    std::cout<<"Ingrese el número de cuenta: ";
    std::cin>>num_cuenta;
    std::cout<<"Introduce el nombre del propietario: ";
    std::cin>>nombre;
    saldo = 0.0;
}

void Cuenta_Bancaria::deposito(double cantidad)
{
    saldo+=cantidad;
    std::cout<<"\nSe realizó un deposito de: $"<< cantidad<<"\n";
}

void Cuenta_Bancaria::retiro(double cantidad)
{
    if(cantidad <= saldo){
        saldo-=cantidad;
        std::cout<<"\nSe realizo el retiro de: $"<<cantidad;
    }else
        std::cout<<"Saldo insuficiente\n";
}

void Cuenta_Bancaria::consulta_saldo()
{
    std::cout<<"\nSaldo: $"<<saldo;
}

int main()
{
    Cuenta_Bancaria *x = new Cuenta_Bancaria;

    x->consulta_saldo();
    x->deposito(1200);
    x->retiro(900);
    x->consulta_saldo();

    delete x;

    return 0;
}
