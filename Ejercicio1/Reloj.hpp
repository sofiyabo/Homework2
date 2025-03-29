#pragma once
//Header file: para la declaracion de la interfaz
#include <string>

class Reloj{
    private:
        int horas, minutos, segundos;
        std::string formato ;

    
    public:
        Reloj(int hh = 0, int mm = 0, int ss = 0, std::string form = "a.m");
        void imprimir() const;
        void imprimir_24hs() const; // Metodo que escriba en formato 0 a 24
        void set_horas(int h);
        void set_minutos(int m);
        void set_segundos(int s);
        void set_formato(std::string f); 
    
    };
    