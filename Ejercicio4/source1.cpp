#include "header1.hpp"
#include <iostream>

void Cuenta_Bancaria::depositar(double cantidad){
     //Como este metodo es igual para todas las derivadas, la defino en la abstracta
     //no hace falta que defina depositar en las derivdas.
        balance += cantidad;
    
}

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
