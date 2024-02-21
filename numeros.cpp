#include <iostream>
#include "Numeros.h"

int main(){
    Flores flor;
    std::string Laflor;
    flor.setColor('a');
    Laflor = flor.tipo_flor();
    std::cout << "The flower is a " << Laflor << std::endl;
    return 0;
}