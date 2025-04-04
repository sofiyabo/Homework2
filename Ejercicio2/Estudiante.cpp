#include "Estudiante.hpp"

#include <iostream>

Estudiante::Estudiante(std::string nombre_alumno, int numero_legajo, std::vector<std::pair<std::string, float>> lista_materias)
    :nombre(nombre_alumno), legajo(numero_legajo), lista_cursos(lista_materias){}


void Estudiante::mostrar_nombre(){
    std::cout << nombre + "\n"<< std::endl;
}

void Estudiante::mostrar_legajo(){
    std::cout << legajo + "\n"<< std::endl;
}

float Estudiante::promedio_general(){
    int suma_notas = 0;
    int cantidad_materias = lista_cursos.size();
    for(int i = 0; i < cantidad_materias; i++){
        suma_notas += lista_cursos[i].second;
    }

    float promedio = suma_notas/cantidad_materias;
    return promedio;
    
}
std::ostream& operator<<(std::ostream & os , const Estudiante& estudiante){
    os<< "Nombre: "<< estudiante.nombre << ". Legajo: " << estudiante.legajo;
    return os;
}