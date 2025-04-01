// Programr clase reloj que tiene varias funcionalidades

#include "Reloj.hpp"
#include "Reloj.cpp"

#include <iostream>
#include <iomanip>


int main(){
    
    int opcion;
    int hh, mm, ss = 0;
    
    Reloj tiempo;

    try{
        std::cout<< "Cómo quiere inicializar el tiempo?\n1. Default\n2. Horas\n3. Horas y minutos\n4. Horas, minutos y segundos.\n5. Horas, minutos, segundos y formato."<< std::endl;
        std::cin>>opcion;

        if(opcion == 2){
            std::cout << "Introduzca las horas (0 - 12): ";
            std::cin >> hh;
                
            tiempo = Reloj(hh);
            }
        else if(opcion == 3){
            std::cout << "Introduzca las horas (0 - 12): ";
            std::cin >> hh;

            std::cout << "Introduzca los minutos (0 - 59): ";
            std::cin >> mm;
                
            tiempo = Reloj(hh, mm);
            }
        else if(opcion == 4){
            std::cout << "Introduzca las horas (0 - 12): ";
            std::cin >> hh;

            std::cout << "Introduzca los minutos (0 - 59): ";
            std::cin >> mm;

            std::cout << "Introduzca los segundos (0 - 59): ";
            std::cin >> ss;
                
            tiempo = Reloj(hh, mm, ss);
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
            
            tiempo = Reloj(hh, mm, ss, formato);
        }

        }catch(const std::exception& e){
            std::cout <<  e.what() << std::endl;}
    
    
    while(true){
        int continuar;

        std::cout << "Como desea continuar?\n1. Mostrar reloj\n2. Cambiar hora\n3. Cambiar minutos\n4. Cambiar segundos\n5. Cambiar formato\n6. Salir"<< std::endl;
        std::cin >> continuar;

        if(continuar == 1){
            int eleccion;

            std::cout<< "En que formato desea ver el reloj?\n1. Formato 0-12 horas\n2. Formato 24 horas."<< std::endl;
            std::cin >> eleccion;
            if(eleccion == 1){
                tiempo.imprimir();
            }
            else{
                tiempo.imprimir_24hs();
            }
        }
        else if(continuar == 2){
            int horas;

            std::cout << "Ingrese las horas:"<< std::endl;
            std::cin >> horas;
            tiempo.set_horas(horas);
        }
        else if(continuar == 3){
            int minutos;

            std::cout << "Ingrese los minutos:"<< std::endl;
            std::cin >> minutos;
            tiempo.set_minutos(minutos);
        }
        else if(continuar == 4){
            int segundos;

            std::cout << "Ingrese los segundos:"<< std::endl;
            std::cin >> segundos;
            tiempo.set_segundos(segundos);
        }
        else if(continuar == 5){
            std::string formato;

            std::cout << "Ingrese el formato (a.m / p.m):"<< std::endl;
            std::cin >> formato;
            tiempo.set_formato(formato);
        }
        else if(continuar == 6){
            return 0;
        }

    }
}