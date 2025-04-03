#pragma once

using namespace std;
#include <string>

//Interfaz
class Numero{ //las interfaces no tienen constructores ni destructores
    public:
        //Toda operacion entre objetos tipo numero devuelven un puntero a numero
        virtual Numero* suma(Numero& num) = 0; 
        virtual Numero* resta(Numero& num) = 0;
        virtual Numero* multiplicacion(Numero& num) = 0;
        virtual string toString() = 0;

};

//Derivadas
class Entero : public Numero{
    private:
        int valor;
    
    public:
        Entero(int num) : valor(num) {} //Los constructores en el header o source?
    
        //le paso la direccion de memoria y cuando quiero el valor uso el operador de desreferenciacion.
        Numero* suma(Numero& num) override;
        Numero* resta(Numero& num) override;
        Numero* multiplicacion(Numero& num) override;
        string toString() override;

};

class Real : public Numero{
    private:
        double valor;

    public:
        Real(double num) : valor(num){}

        Numero* suma(Numero& num) override;
        Numero* resta(Numero& num) override;
        Numero* multiplicacion(Numero& num) override;
        string toString() override;

};

class Complejo : public Numero{
    private:
        double parte_real;
        double parte_imaginaria;

    public:
        Complejo(double real, double imaginario) : parte_real(real), parte_imaginaria(imaginario){}
        
        Numero* suma(Numero& num) override;
        Numero* resta(Numero& num) override;
        Numero* multiplicacion(Numero& num) override;
        string toString() override;


};