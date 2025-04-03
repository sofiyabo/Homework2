//metodo virtual puro: no tiene una implementacion en la clase base y se define como =0
//es obligatorio sobreescribirlo en la clase derivada

//metodo virtual: puede tener una implementacion en la clase base.
//no es obligatorio sobreescribirlo en la clase base.

#include <iostream>

class Cuenta_Bancaria{ //clase abstracta
    public:
        double balance = 0;
        std::string titularCuenta = 0;
        virtual void depositar(double cantidad) = 0;
        virtual void retirar(double cantidad) = 0;
        virtual void mostrarInfo() = 0;

};

class CajaDeAhorro : public Cuenta_Bancaria{

};

class CuentaCorriente : public Cuenta_Bancaria{
    
};