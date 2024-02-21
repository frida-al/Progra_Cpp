#include <string>
#include "Auto.h"
class Agencia {
    private:
    int num_autos;
    Auto autos[100];
    std::string nombre;

    public:
    Agencia(): num_autos(0){};
    Agencia(std::string nom):nombre(nom), num_autos(0){};
    void agrega_auto(Auto);
    std::string to_string();
};

void Agencia::agrega_auto(Auto aut){ //AQUÍ ESTÁ AGREGACIÓN. Se recibe un objeto de otra clase EN EL PARÉNTESIS.
    autos[num_autos] = aut;
    num_autos++;
}

std::string Agencia::to_string(){
    std::stringstream aux;
    aux << "agencia" << nombre;
    for (int i = 0; i < num_autos; i++){
        aux << autos[i].to_string() << " " << std::endl;
    }
    return aux.str();
}
