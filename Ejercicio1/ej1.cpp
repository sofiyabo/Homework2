// Programr clase reloj que tiene varias funcionalidades

#include <iostream>
#include <iomanip>

class Reloj{
public: //variables a las que se pueden acceder por fuera de la declaracion de la clase
    int segundos, minutos, horas;
    bool am;

   Reloj(int SS = 0, int MM = 0, int HH = 0, bool AM = true){
    segundos = SS;
    minutos = MM;
    if(HH > 12 && AM == false){
        //cambiar a que sea menor a 12
    }
    
    }

   void imprimir(){
    std::cout << horas << "h, " << minutos << "m, " << segundos << "s "<< "\n" <<std::endl;
   }


};

int main(){
    Reloj cont;
    cont.imprimir();

    return 0;
}