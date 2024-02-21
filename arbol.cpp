#include <iostream>
#include <string>
#include "Arbol.h"
int main(){

  Arbol arbol_1("abedul", 12, 187.5, "blanco"); //Así se rellena el constructor
  std::cout << arbol_1.get_especie() << std::endl;
  std::cout << arbol_1.get_edad() << std::endl;
  std::cout << arbol_1.get_tam() << std::endl;
  std::cout << arbol_1.get_color() << std::endl;
  Arbol arbol_2("fresno", 14, 160.5, "verde"); //Así se rellena el constructor
  std::cout << arbol_2.get_especie() << std::endl;
  std::cout << arbol_2.get_edad() << std::endl;
  std::cout << arbol_2.get_tam() << std::endl;
  std::cout << arbol_2.get_color() << std::endl;
  Arbol arbol_2("roble", 14, 160.5, "café"); //Así se rellena el constructor
  std::cout << arbol_2.get_especie() << std::endl;
  std::cout << arbol_2.get_edad() << std::endl;
  std::cout << arbol_2.get_tam() << std::endl;
  std::cout << arbol_2.get_color() << std::endl;
  arbol_1.crece(15);
  std::cout << arbol_1.get_especie() << std::endl;
  std::cout << arbol_1.get_edad() << std::endl;
  std::cout << arbol_1.get_tam() << std::endl;
  std::cout << arbol_1.get_color() << std::endl;
  return 0;
}