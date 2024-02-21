#ifndef LLANTA_H_ // Va de a huevo en los .h
#define LLANTA_H_ // Va de a huevo en los .h

#include <sstream> // Va de a huevo cuando usas el stringstream (línea 31) ¿? Creo
#include <string>
//Este archivo no necesita mandar a llamar a ningún .h

class Llanta { //clase normal, que va a servir de composición para la clase Auto. O sea si no hay clase Auto, no hay clase Llanta

  private: // Atributos (casi siempre por default son privados)
    std::string nombre;
    bool ponchada;

  public: 
    Llanta(){}; // Constructor default (Siempre SIEMPRE va)
    Llanta(std::string s, bool p):nombre(s),ponchada(p){}; // Constructor que recibe cosas O las tiene establecidas porque tú las pusiste 
    void set_ponchada(bool); // Prototipo de función/método (MÉTODO Y FUNCIÓN SON LO MISMO) (ej. índice de un libro, aquí pones SOLO el título del capítulo y FUERA DE LA CLASE ya desarrollas el capítulo, línea 26)
    std::string to_string(); // Prototipo de función (MÉTODO Y FUNCIÓN SON LO MISMO) TIENE QUE COINCIDIR CON EL MÉTODO DESARROLLADO. Por ejemplo, si aquí pones que el return type es int y que el paréntesis va vacío, tiene que ir IGUAL cuando desarrolles el método completo. 

    // Las diferencias entre los prototipos y los métodos es que en el prototipo NO especificas a QUÉ CLASE PERTENECE (y en el método sí) y que en el prototipo cierras con ; y en el método abres y cierras llaves.

}; //Las clases terminan con ;

// En el método (capítulo desarrollado) siempre va el siguiente orden:
//data type  nombre_de_la_clase::nombre_de_función(data_type_del_parámetro parámetro(variable) {})
void Llanta::set_ponchada(bool p){ //setter 
  ponchada = p; //Siempre que es un setter solo pones la variable completa igualada a la variable mochada (de nombre)
}

std::string Llanta::to_string(){ // Se usa en lugar de un getter (Eso entendí yo)
    std::stringstream aux; // Lleva std:: (No sé cómo se usa el using namespace)
    aux << nombre << " estatus " << ponchada;
    return aux.str(); // return normal. El .str() se usa para convertir lo que está guardado en la variable "aux" a un string
}

#endif // A huevo va
