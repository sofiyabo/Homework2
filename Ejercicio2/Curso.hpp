#include "Estudiante.hpp"
#include <iostream>
#include <vector>
#include <memory>

class Curso
{
private:
     std::vector<std::shared_ptr<Estudiante>> lista_estudiantes;
    
public:
    Curso();
    void inscribir_estudiante(Estudiante);
    

};

