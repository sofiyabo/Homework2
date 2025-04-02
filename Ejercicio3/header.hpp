
using namespace std;
#include <string>

class Numero{
    public:
        virtual float suma() = 0;
        virtual float resta() = 0;
        virtual float multiplicacion() = 0;
        virtual string toString() = 0;

};

class Entero : public Numero{
    float suma() override;
    float resta() override;
    float multiplicacion() override;
    

};