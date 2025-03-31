#pragma once

#include <iostream> //ver si este realmente hace falta
#include <string>
#include <vector>

class Estudiante
{
    private:
        std::string nombre;
        int legajo;
        std::vector<std::vector<std::string, float>> lista_cursos; //la lista contiene una tupla por materia, con el nombre de la materia y la nota final
        //Recordar: puedo hacer push back con el metodo de vector!!

    public:
        Estudiante(std::string nombre_alumno, int numero_legajo, std::vector<std::vector<std::string, float>> lista_materias);
        void mostrar_nombre();
        void mostrar_legajo();
        float promedio_general();


};
