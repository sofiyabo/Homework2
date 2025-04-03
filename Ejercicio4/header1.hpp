//metodo virtual puro: no tiene una implementacion en la clase base y se define como =0
//es obligatorio sobreescribirlo en la clase derivada

//metodo virtual: puede tener una implementacion en la clase base.
//no es obligatorio sobreescribirlo en la clase base.

#include <iostream>

//EXPLICAR MEJOR LOS ACCESOS

class Cuenta_Bancaria{ //clase abstracta, no es lo mismo que interfaz!!! puede tener constructor
    protected: //Uso protected para que las derivadas puedan acceder directamente como atributo pero no sean accesibles por fuera de las clases
        std::string titularCuenta = 0;
        double balance = 0;
    
    public:
        Cuenta_Bancaria(std::string titular, double saldo_cuenta) : titularCuenta(titular), balance(saldo_cuenta){}
        virtual ~Cuenta_Bancaria(){}
        virtual void depositar(double cantidad);
        virtual void retirar(double cantidad) = 0;
        virtual void mostrarInfo() = 0;

};

class CuentaCorriente;

class CajaDeAhorro : public Cuenta_Bancaria{
    private:
        int contador_infos = 0;

    public:
        CajaDeAhorro(std::string titular, double saldo_cuenta);
        virtual ~CajaDeAhorro();
        void retirar(double cantidad) override;
        void mostrarInfo() override;


    friend class CuentaCorriente;

};

class CuentaCorriente : public Cuenta_Bancaria{//quiero asociar una cuenta corriente a una caja de ahorro
    private:
        CajaDeAhorro* cuenta_ahorro;

    public:
        CuentaCorriente(std::string titular, double saldo_cuenta, CajaDeAhorro* ahorro) : Cuenta_Bancaria(titular, saldo_cuenta), cuenta_ahorro(ahorro){}
        void retirar(double cantidad) override;
        void mostrarInfo() override;
};



