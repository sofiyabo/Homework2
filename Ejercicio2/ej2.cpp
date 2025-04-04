#include "Estudiante.hpp"
#include "Curso.hpp"

int main(){
    Curso curso1;
    std::shared_ptr<Estudiante> alumno1 = std::make_shared<Estudiante>("Carlos", 45, std::vector<std::pair<std::string, float>>{{"Matematica", 5.5}, {"Lengua", 6}});
    std::shared_ptr<Estudiante> alumno2 = std::make_shared<Estudiante>("Ana", 56, std::vector<std::pair<std::string, float>>{{"Matematica", 5}, {"Lengua", 8}});
    std::shared_ptr<Estudiante> alumno3 = std::make_shared<Estudiante>("Pedro", 18, std::vector<std::pair<std::string, float>>{{"Matematica", 9}, {"Lengua", 7}});
    std::shared_ptr<Estudiante> alumno4 = std::make_shared<Estudiante>("Beatriz", 34, std::vector<std::pair<std::string, float>>{{"Matematica", 8}, {"Lengua", 9}});

    curso1.inscribir_estudiante(alumno1);
    curso1.inscribir_estudiante(alumno2);
    curso1.imprimir_orden_alfabetico();
}