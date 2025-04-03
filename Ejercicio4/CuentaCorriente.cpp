#include "header1.hpp"
#include <iostream>

void CuentaCorriente::retirar(double cantidad){
    if(cantidad < balance){
        std::cout <<balance;
        balance -= cantidad;
    }
    else if(cuenta_ahorro->balance > cantidad){
        cuenta_ahorro->balance -= cantidad;
        std::cout<< "Se han retirado los fondos de su caja de ahorro"<< std::endl;
    }
    else{
        std::cout<< "No hay saldos suficientes para retirar esa cantidad de dinero." <<std::endl;
    }
}

void CuentaCorriente::mostrarInfo(){
    std::cout << "Nombre titular: "<< titularCuenta<< ". Balance: "<< balance << std::endl;
}

