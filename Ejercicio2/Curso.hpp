#include "Estudiante.hpp"
#include <iostream>
#include <vector>
#include <memory>

//Capacidad maxima de estudiantes es 20
class Curso
{
private:
     std::vector<std::shared_ptr<Estudiante>> lista_estudiantes;
     int cantidad_estudiantes;
    
public:
    Curso();
    void inscribir_estudiante(Estudiante);
    void desincribir_estudiante(int num_legajo);
    void buscar_estudiante(int num_legajo);
    void capacidad_curso();
    void imprimir_orden_alfabetico();
    //Copia objeto curso

};

