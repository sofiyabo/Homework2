#include "header1.hpp"
#include <iostream>

CajaDeAhorro::CajaDeAhorro(std::string titular, double saldo_cuenta) : Cuenta_Bancaria(titular, saldo_cuenta){} //constructor

CajaDeAhorro::~CajaDeAhorro() {}

void CajaDeAhorro::retirar(double cantidad){
    if(cantidad > balance){
        std::cout << "Saldos insuficientes para retirar"<< std::endl;
    }
    else{
        balance -= cantidad;
    }
}

void CajaDeAhorro::mostrarInfo(){

    if(contador_infos < 2){
        std::cout << "Nombre titular: "<< titularCuenta<< ". Balance: "<< balance << std::endl;
        contador_infos++;
    }
    else{
        balance -= 20;
        std::cout<< "Se han descontado $20 de su cuenta"<< std::endl;
        std::cout << "Nombre titular: "<< titularCuenta<< ". Balance: "<< balance << std::endl;
        contador_infos++;
    }
}

