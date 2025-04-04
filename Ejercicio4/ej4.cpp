#include "header1.hpp"
#include <iostream>

int main(){
    CajaDeAhorro cuenta_ahorro("Sofia", 5000);
    CuentaCorriente cuenta_corriente("Sofia", 800, &cuenta_ahorro);
    cuenta_corriente.mostrarInfo();
    cuenta_corriente.retirar(2000);
    cuenta_corriente.mostrarInfo();
    cuenta_ahorro.depositar(50);
    cuenta_ahorro.mostrarInfo();
    cuenta_ahorro.mostrarInfo();
    cuenta_ahorro.mostrarInfo();

}