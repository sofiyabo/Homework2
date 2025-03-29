// Programr clase reloj que tiene varias funcionalidades

#include "Reloj.hpp"
#include "Reloj.cpp"

#include <iostream>
#include <iomanip>


int main(){
    //1.a
    Reloj tiempo_a;
    tiempo_a.imprimir();

    //1.b
    Reloj tiempo_b(4);
    tiempo_b.imprimir();

    //1.c
    Reloj tiempo_c(5, 35);
    tiempo_c.imprimir();

    //1.d
    Reloj tiempo_d(7, 50, 45);
    tiempo_d.imprimir();

    //1.e
    Reloj tiempo_e(9, 30, 21, "p.m");
    tiempo_e.imprimir();

    //1.f
    Reloj tiempo_f(30);
    //COMPLETAR

    return 0;
}