//Source file: para la implementacion
#include "Reloj.hpp"

#include <iostream>
#include <iomanip> //setw o setfill
//VER LO DE SET Y FILL CUANDO ES UN DIGITO

Reloj::Reloj(int hh , int mm, int ss, std::string form) :horas(hh), minutos(mm), segundos(ss), formato(form){ //Constructor
    if(hh < 0 || mm < 0 || ss < 0 || hh>12 || mm > 59 || ss > 59 || (form != "a.m" && form != "p.m")){
        throw std::invalid_argument("Error en los rangos de los datos ingresados. Por favor ingrese datos validos.");
    }
} 


void Reloj::imprimir() const{
    std::cout << std::setfill('0') << std::setw(2) << horas << "h, ";
    std::cout << std::setfill('0') << std::setw(2) << minutos << "m, ";
    std::cout << std::setfill('0') << std::setw(2) << segundos << "s ";
    std::cout << formato << std::endl;
}

void Reloj::imprimir_24hs() const{
    if(horas != 12 && formato == "p.m"){
        std::cout << std::setfill('0') << std::setw(2) << (horas +12) << "h, ";
    }
    else if(horas == 12 && formato == "a.m"){
        std::cout << std::setfill('0') << std::setw(2) << 00 << "h, ";
    }
    else{
        std::cout << std::setfill('0') << std::setw(2) << horas << "h, "; 
    }
    std::cout << std::setfill('0') << std::setw(2) << minutos << "m, ";
    std::cout << std::setfill('0') << std::setw(2) << segundos << "s \n";

}

void Reloj::set_horas(int h){
    if(h < 0 || h>12 ){
        throw std::invalid_argument("Error en los rangos de los datos ingresados. Por favor ingrese datos validos.");
    }
    horas = h;
}

void Reloj::set_minutos(int m){
    if(m < 0 || m>59 ){
        throw std::invalid_argument("Error en los rangos de los datos ingresados. Por favor ingrese datos validos.");
    }
    minutos = m;
}

void Reloj::set_segundos(int s){
    if(s < 0 || s>59 ){
        throw std::invalid_argument("Error en los rangos de los datos ingresados. Por favor ingrese datos validos.");
    }
    segundos = s;
}

void Reloj::set_formato(std::string f){
    if(f != "a.m" && f!= "p.m" ){
        throw std::invalid_argument("Error en los rangos de los datos ingresados. Por favor ingrese datos validos.");
    }
    formato = f;
}

//VER METODOS PARA LEER INDIVIDUALMENTE