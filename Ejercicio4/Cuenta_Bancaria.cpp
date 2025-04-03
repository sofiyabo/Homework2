#include "header1.hpp"
#include <iostream>

void Cuenta_Bancaria::depositar(double cantidad){
     //Como este metodo es igual para todas las derivadas, la defino en la abstracta
     //no hace falta que defina depositar en las derivdas.
        balance += cantidad;
    
}

