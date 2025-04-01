#include "Curso.hpp"

Curso::Curso(){

};


void Curso::inscribir_estudiante(std::shared_ptr<Estudiante>& alumno){
    if(lista_estudiantes.size() == CAPACIDAD_MAXIMA){
        std::cout<< "No se puede agregar al estudiante porque el curso esta completo."<< std::endl;
    }
    else{
        lista_estudiantes.push_back(alumno);
    }

};

void Curso::desincribir_estudiante(int num_legajo){
    
    for(int i = 0; i<lista_estudiantes.size(); i++){
        Estudiante& estudiante = *lista_estudiantes[i];
        if(estudiante.legajo == num_legajo){

        }

    }
};

void Curso::buscar_estudiante(int num_legajo){

};
void Curso::capacidad_curso(){

};

void Curso::imprimir_orden_alfabetico(){

};