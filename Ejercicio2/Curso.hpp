#pragma once

#include "Estudiante.hpp"
#include <iostream>
#include <vector>
#include <memory>

//Capacidad maxima de estudiantes es 20
class Curso
{
private:
     std::vector<std::shared_ptr<Estudiante>> lista_estudiantes;
     const int CAPACIDAD_MAXIMA = 20;
    
public:
    Curso() = default;
    void inscribir_estudiante(std::shared_ptr<Estudiante>&);
    void desincribir_estudiante(int num_legajo);
    void buscar_estudiante(int num_legajo);
    void capacidad_curso();
    void imprimir_orden_alfabetico();
    Curso copia_curso() const; //conviene metodo o constructor???

};

