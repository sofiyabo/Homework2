#include "header.hpp"
#include "source.cpp"
#include <iostream>

int main(){
    //ENTEROS
    Entero num(2);
    Entero num2(4);
    Numero* multi = num.multiplicacion(num2);

    Entero* resultado = dynamic_cast<Entero*>(multi);
    std::cout << resultado->toString() << std::endl;

    //REALES


    //COMPLEJOS
    Complejo complejo1(3,2);
    Complejo complejo2(1, 4);

    Complejo* resultado2 = dynamic_cast<Complejo*>(complejo1.multiplicacion(complejo2));

    std::cout << resultado2->toString();
    return 0;
}