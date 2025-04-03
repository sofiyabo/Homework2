#include "header.hpp"
#include <iostream>

int main(){
    //ENTEROS
    Entero entero1(2);
    Entero entero2(4);


    Entero* resultado_s = dynamic_cast<Entero*>(entero1.suma(entero2));
    Entero* resultado_r = dynamic_cast<Entero*>(entero1.resta(entero2));
    Entero* resultado_m = dynamic_cast<Entero*>(entero1.multiplicacion(entero2));
    std::cout << "Resultado suma: "<< resultado_s->toString() << "\nResultado resta: "<< resultado_r->toString() << "\nResultado multiplicacion: "<< resultado_m->toString() << std::endl;

    //REALES
    Real real1(10.5);
    Real real2(3.2);

    Real* resultado_s2 = dynamic_cast<Real*>(real1.suma(real2));
    Real* resultado_r2 = dynamic_cast<Real*>(real1.resta(real2));
    Real* resultado_m2 = dynamic_cast<Real*>(real1.multiplicacion(real2));
    std::cout << "Resultado suma: "<< resultado_s2->toString() << "\nResultado resta: "<< resultado_r2->toString() << "\nResultado multiplicacion: "<< resultado_m2->toString() << std::endl;


    //COMPLEJOS
    Complejo complejo1(3,2);
    Complejo complejo2(1, 4);

    Complejo* resultado1 = dynamic_cast<Complejo*>(complejo1.suma(complejo2));
    Complejo* resultado2 = dynamic_cast<Complejo*>(complejo1.resta(complejo2));
    Complejo* resultado3 = dynamic_cast<Complejo*>(complejo1.multiplicacion(complejo2));

    std::cout << "Resultado suma: "<< resultado1->toString() << "\nResultado resta: "<< resultado2->toString() << "\nResultado multiplicacion: "<< resultado3->toString() << std::endl;
    return 0;
}