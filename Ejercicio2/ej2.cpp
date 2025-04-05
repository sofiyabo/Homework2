#include "Estudiante.hpp"
#include "Curso.hpp"

//La relacion entre Curso y Estudiantes es de agregacion ya que el Curso contiene objetos tipo Estudiantes

int main(){
    Curso curso1;
    std::shared_ptr<Estudiante> alumno1 = std::make_shared<Estudiante>("Carlos", 45, std::vector<std::pair<std::string, float>>{{"Matematica", 5}, {"Lengua", 6}});
    std::shared_ptr<Estudiante> alumno2 = std::make_shared<Estudiante>("Ana", 56, std::vector<std::pair<std::string, float>>{{"Matematica", 5}, {"Lengua", 8}});
    std::shared_ptr<Estudiante> alumno3 = std::make_shared<Estudiante>("Pedro", 18, std::vector<std::pair<std::string, float>>{{"Matematica", 9}, {"Lengua", 7}});
    std::shared_ptr<Estudiante> alumno4 = std::make_shared<Estudiante>("Maria", 34, std::vector<std::pair<std::string, float>>{{"Matematica", 8}, {"Lengua", 9}});

    std::cout << alumno1->promedio_general() << std::endl;
    curso1.inscribir_estudiante(alumno1);
    curso1.inscribir_estudiante(alumno2);
    curso1.inscribir_estudiante(alumno3);
    curso1.imprimir_orden_alfabetico();
    curso1.desincribir_estudiante(alumno1->legajo);
    curso1.buscar_estudiante(alumno1->legajo);
    curso1.imprimir_orden_alfabetico();
    curso1.capacidad_curso();

    //Copia de curso:
    Curso curso2 = curso1.copia_curso();
    curso2.inscribir_estudiante(alumno4);
    //Verifico que los dos cursos tienen a sus respectivos alumnos:
    std::cout<< "Curso 1:" << std::endl;
    curso1.imprimir_orden_alfabetico();
    std::cout<< "Curso 2:" << std::endl;
    curso2.imprimir_orden_alfabetico();

}