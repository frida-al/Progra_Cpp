#include <iostream>

//using namespace std;

#include "Agencia.h"
#include "Auto.h"

int main(){
  Auto sentra; // Se crea objeto tipo AUTO llamado SENTRA (el objeto se llama sentra)
  sentra.agregaLlanta("goodyear back left", false, 0); // Se usan las funciones de la clase AUTO
  sentra.agregaLlanta("goodyear back right", false, 1);
  sentra.agregaLlanta("uniroyal front left", false, 2);
  sentra.agregaLlanta("uniroyal front right", false, 3);


  Agencia chavez("Chavez"); // Se crea un objeto tipo AGENCIA
  chavez.agrega_auto(sentra); // Se usan las funciones de la clase AGENCIA
   std::cout << chavez.to_string();
   return 0;
}
