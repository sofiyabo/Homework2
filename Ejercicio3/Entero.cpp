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

