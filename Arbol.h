#include<string>
class Arbol{

    private: //definición de atributos
    std::string especie; 
    int edad;
    float tam; 
    std::string color;

    public:
    Arbol(): especie(""), edad(0), tam(0), color(""){}; //Constructor
    Arbol(std::string esp, int ed, float ta, std::string co): especie(esp), edad(ed), tam(ta), color(co){}; // Para guardar las variable
    std::string get_especie();
    void set_especie(std::string); //No es necesario meter el nombre de la variable como parametro, solo el data type
    int get_edad();
    void set_edad(int);
    float get_tam();
    void set_tam(float);
    std::string get_color();
    void set_color(std::string);
    void crece(int tiempo);

};
std::string Arbol::get_especie(){
  return especie;
}

void Arbol::set_especie(std::string esp){
  especie = esp;
}
int Arbol::get_edad(){
    return edad;
}

void Arbol::set_edad(int ed){
    edad = ed;
}

float Arbol::get_tam(){
    return tam;
}
void Arbol::set_tam(float ta){
    tam = ta;
}

std::string Arbol::get_color(){
    return color;
}
void Arbol::set_color(std::string co){
    color = co;
}

void Arbol::crece(int tiempo){
    edad = edad + tiempo;
    for (int i = 0; i < tiempo; i++);
    tam = tam * 1.2;
}