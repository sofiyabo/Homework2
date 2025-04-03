#include "header.hpp"
#include <iomanip>


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
    stream<< std::fixed << std::setprecision(1)<< parte_real << "+" << parte_imaginaria << "i";
    return stream.str();
}

