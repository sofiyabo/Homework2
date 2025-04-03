#pragma once

#include <iostream> 
#include <string>
#include <vector>

class Estudiante
{
    public:
        std::string nombre;
        int legajo;
        std::vector<std::vector<std::string, float>> lista_cursos; //la lista contiene un vector por materia, con el nombre de la materia y la nota final

        Estudiante(std::string nombre_alumno, int numero_legajo, std::vector<std::vector<std::string, float>> lista_materias);
        void mostrar_nombre();
        void mostrar_legajo();
        float promedio_general();


};
