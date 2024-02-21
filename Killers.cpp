#include <iostream>
#include <string>
#include "Killers.h"

int main(){
    Cancion cancion1(2000, "single", "Mr. Brightside");
    cancion1.set_tipo("album");
    std::string var;
    std::cin >> var;
    cancion1.add_etiqueta(var);
}