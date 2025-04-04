#pragma once

#include <iostream> 
#include <string>
#include <vector>
#include <algorithm>

class Estudiante
{
    public:
        std::string nombre;
        int legajo;
        std::vector<std::pair<std::string, float>> lista_cursos; //la lista contiene un vector por materia, con el nombre de la materia y la nota final

        Estudiante(std::string nombre_alumno, int numero_legajo, std::vector<std::pair<std::string, float>> lista_materias);
        void mostrar_nombre();
        void mostrar_legajo();
        float promedio_general();

        // Como voy a comparar estudiantes por orden alafabetico, sobrecargo operador < 
        // para que compare los nombres de estudiantes alfabeticamente
        bool operator<(Estudiante& alumno) const{
            return nombre < alumno.nombre;
        };
                
        // Para poder imprimir los estudiantes, sobrecargo el operador << para imprimir estudiantes
        friend std::ostream& operator<<(std::ostream& os , const Estudiante& p);
    

};
