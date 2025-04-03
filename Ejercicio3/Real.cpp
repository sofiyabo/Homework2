#include "header.hpp"
#include <iomanip>
Numero* Real::suma(Numero& num){
    Real* numero = static_cast<Real*>(&num);

    return new Real(this->valor + numero->valor);

}

Numero* Real::resta(Numero& num){
    Real* numero = static_cast<Real*>(&num);

    return new Real(this->valor - numero->valor);

}

Numero* Real::multiplicacion(Numero& num){
    Real* numero = static_cast<Real*>(&num);

    return new Real(this->valor * numero->valor);

}

std::string Real::toString(){

    std::ostringstream stream;
    stream<< std::fixed << std::setprecision(1)<< valor;
    return stream.str();
}

