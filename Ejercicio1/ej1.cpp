// Programr clase reloj que tiene varias funcionalidades

#include "Reloj.hpp"
#include "Reloj.cpp"

#include <iostream>
#include <iomanip>

/*
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
    //Reloj tiempo_f(30);
    //COMPLETAR

    //1.i
    Reloj tiempo_i;
    int hh, mm, ss;
    std::string formato;

    while(true){
        try{
            std::cout << "Introduzca las horas (0 - 12): ";
            std::cin >> hh;
            tiempo_i.set_horas(hh);
    
            std::cout << "Introduce los minutos (0-59): ";
            std::cin >> mm;
            tiempo_i.set_minutos(mm);
    
            std::cout << "Introduce los segundos (0-59): ";
            std::cin >> ss;
            tiempo_i.set_segundos(ss);
    
            std::cout << "Introduce el formato (a.m. o p.m.): ";
            std::cin >> formato;
            tiempo_i.set_formato(formato);
        } catch (const std::exception& e){
            std::cout << "Error " << e.what() << std::endl;
        }
    }
    
    return 0;
}
    */

//HACER LOS DOS MENUES; como se quiere inicializar y el de modificaciones

int main(){
    while(true){
        int opcion;
        int hh, mm, ss = 0;
        
        try{
            std::cout<< "Cómo quiere inicializar el tiempo?\n1. Default\n2. Horas\n3. Horas y minutos\n4. Horas, minutos y segundos.\n5. Horas, minutos, segundos y formato."<< std::endl;
            std::cin>>opcion;

            if(opcion == 1){
                Reloj tiempo;

            }
            else if(opcion == 2){
                std::cout << "Introduzca las horas (0 - 12): ";
                std::cin >> hh;
                
                Reloj tiempo(hh);
            }
            else if(opcion == 3){
                std::cout << "Introduzca las horas (0 - 12): ";
                std::cin >> hh;

                std::cout << "Introduzca los minutos (0 - 59): ";
                std::cin >> mm;
                
                Reloj tiempo(hh, mm);
            }
            else if(opcion == 4){
                std::cout << "Introduzca las horas (0 - 12): ";
                std::cin >> hh;

                std::cout << "Introduzca los minutos (0 - 59): ";
                std::cin >> mm;

                std::cout << "Introduzca los segundos (0 - 59): ";
                std::cin >> ss;
                
                Reloj tiempo(hh, mm, ss);
            }
            else if(opcion == 5){
            std::string formato;
            
            std::cout << "Introduzca las horas (0 - 12): ";
            std::cin >> hh;

            std::cout << "Introduzca los minutos (0 - 59): ";
            std::cin >> mm;

            std::cout << "Introduzca los segundos (0 - 59): ";
            std::cin >> ss;

            std::cout << "Introduzca los el formato (a.m / p.m)";
            std::cin >> formato;
            
            Reloj tiempo(hh, mm, ss, formato);
        }

    }catch(const std::exception& e){
        std::cout << "Error " << e.what() << std::endl;}

        
    }
}