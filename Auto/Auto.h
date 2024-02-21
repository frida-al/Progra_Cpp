#ifndef AUTO_H_ // Va de a huevo en los .h
#define AUTO_H_ // Va de a huevo en los .h

#include "Llanta.h" // Clase Llanta
#include <sstream> // Va de a huevo cuando usas el stringstream (línea 26) ¿? Creo
#include <string> //Va de a huevo cuando usas strings

class Auto{

  private:
  std::string nombre;
  Llanta llantas[4]; //Se crea una variable TIPO LLANTA (cómo si se creara una variable normal pero el return type/data type es la clase a la que pertenece la variable)

  public:
    Auto(): nombre(""){}; // Constructor default (Siempre SIEMPRE va)
    Auto(std::string nom): nombre(nom){}; // Constructor que recibe cosas O las tiene establecidas porque tú las pusiste 
    void agregaLlanta(std::string, bool, int); // Prototipo de función (MÉTODO Y FUNCIÓN SON LO MISMO)
    std::string to_string(); // Prototipo de función (MÉTODO Y FUNCIÓN SON LO MISMO)

};
//data type  nombre_de_la_clase::nombre_de_función(data_type_del_parámetro parámetro(variable) {})
void Auto::agregaLlanta(std::string marca, bool ponchada, int posicion){
  llantas[posicion] =  Llanta (marca, ponchada); //AQUÍ ESTÁ LA COMPOSICIÓN. Estás creando un objeto DENTRO del método.
}                    // Este es el objeto

std::string Auto::to_string(){
  std::stringstream aux;
    for(int i = 0 ; i <4; i++){
      aux <<"llanta: " << i << llantas[i].to_string()<< std::endl;
    }//variable aux guarda: "llanta: " << posición i << la marca y si la llanta está ponchada o no en la posición i (lo convierte a string)
    return aux.str();
}

#endif
