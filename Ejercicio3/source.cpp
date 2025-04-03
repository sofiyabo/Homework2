#include "header.hpp"
#include <iomanip>



Numero* Entero::suma(Numero& num){
    //uso static cast para convertir a num en entero 
    Entero* numero = static_cast<Entero*>(&num);

    return new Entero(this->valor + numero->valor);

}

Numero* Entero::resta(Numero& num){
    Entero* numero = static_cast<Entero*>(&num);

    return new Entero(this->valor - numero->valor);

}

Numero* Entero::multiplicacion(Numero& num){
    Entero* numero = static_cast<Entero*>(&num);

    return new Entero(this->valor * numero->valor);

}

string Entero::toString(){
    return to_string(valor);
}

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

    return to_string(valor);
}

Numero* Complejo::suma(Numero& num){
    Complejo* numero = static_cast<Complejo*>(&num);

    return new Complejo(parte_real + numero->parte_real, parte_imaginaria + numero->parte_imaginaria);

}

Numero* Complejo::resta(Numero& num){
    Complejo* numero = static_cast<Complejo*>(&num);

    return new Complejo(parte_real - numero->parte_real, parte_imaginaria - numero->parte_imaginaria);

}

Numero* Complejo::multiplicacion(Numero& num){
    Complejo* numero = static_cast<Complejo*>(&num);

    double resultado_parte_real = (parte_real * numero->parte_real) - (parte_imaginaria * numero->parte_imaginaria);
    double resultado_parte_imaginaria = (parte_real * numero->parte_imaginaria) + (parte_imaginaria * numero->parte_real);

    return new Complejo(resultado_parte_real, resultado_parte_imaginaria);

}

std::string Complejo::toString(){

    std::ostringstream stream;
    stream<< std::fixed << std::setprecision(1)<< parte_real << "+" << parte_imaginaria << "i\n";
    return stream.str();
}

