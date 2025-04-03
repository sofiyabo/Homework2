#include "Curso.hpp"

Curso::Curso(){

};

//Si uso punteros a objetos se usan -> en vez de .


void Curso::inscribir_estudiante(std::shared_ptr<Estudiante>& alumno){
    if(lista_estudiantes.size() == CAPACIDAD_MAXIMA){
        std::cout<< "No se puede agregar al estudiante porque el curso esta completo."<< std::endl;
    }
    else{
        lista_estudiantes.push_back(alumno);
    }

}

void Curso::desincribir_estudiante(int num_legajo){
    //quiero usar un iterador para buscar
    std::vector<std::shared_ptr<Estudiante>>::iterator it;
    for(it= lista_estudiantes.begin(); it != lista_estudiantes.end(); it++){
        if((**it).legajo == num_legajo){
            lista_estudiantes.erase(it);
            std::cout << "El estudiante ha sido desinscripto"<< std::endl;
            return;
        }
    }
    std::cout<<"El estudiante no se encuentra en el curso"<< std::endl;

}

void Curso::buscar_estudiante(int num_legajo){
    std::vector<std::shared_ptr<Estudiante>>::iterator it;
    for(it= lista_estudiantes.begin(); it != lista_estudiantes.end(); it++){
        if((**it).legajo == num_legajo){
            std::cout <<"El estudiante se encuentra inscripto"<<std::endl;
            return;
        }
    }
    std::cout <<"El estudiante se encuentra inscripto"<<std::endl;

};
void Curso::capacidad_curso(){
    if(lista_estudiantes.size() < CAPACIDAD_MAXIMA){
        std::cout << "El curso no esta completo" << std::endl;
    }
    else{
        std::cout<< "El curso se encuentra lleno."<< std::endl;
    }
};

void Curso::imprimir_orden_alfabetico(){

};