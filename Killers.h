#include <string>
class Cancion {
    private: 
    int year, num_et;
    std::string etiquetas[100];
    std::string tipo, nombre;

    public:
    Cancion(): year(0), tipo(""), nombre(""), num_et(0){};
    Cancion(int y, std::string ty, std::string nom): year(y), tipo(ty), nombre(nom), num_et(0){};
    void set_year(int);
    int get_year();
    void set_tipo(std::string);
    std::string get_tipo();
    void add_etiqueta(std::string);
    bool consulta_etiqueta(std::string);
};
void Cancion::set_year(int y){
    year = y;
}
int Cancion::get_year(){
    return year;
}
void Cancion::set_tipo(std::string ty){
    tipo = ty;
}
std::string Cancion::get_tipo(){
    return tipo;
}
void Cancion::add_etiqueta(std::string etiqueta){
    etiquetas[num_et] = etiqueta; 
    num_et++;
}
bool Cancion::consulta_etiqueta(std::string etiqueta){
    for (int i = 0; i < num_et; i++){
        if (etiquetas[i] == etiqueta){
            return true;
        }
    }
    return false;
}