#include <string>

class Personaje {

    private:
    int vida;
    int magia;
    std::string nombre;
    std::string raza;

    public:
    Personaje(): vida(0), magia(0), nombre(""), raza(""){};
    Personaje(int vi, int mag, std::string nom, std::string raz): vida(vi), magia(mag), nombre(nom), raza(raz){};
    void set_vida(int);
    int get_vida();
    void set_magia(int);
    int get_magia();
    void set_nombre(std::string);
    std::string get_nombre();
    void set_raza(std::string);
    std::string get_raza();
    void damage(int);
};

void Personaje::set_vida(int vi){
    vida = vi;
}
int Personaje::get_vida(){
    return vida;
}
void Personaje::set_magia(int mag){
    magia = mag;
}
int Personaje::get_magia(){
    return magia;
}
void Personaje::set_nombre(std::string nom){
    nombre = nom;
}
std::string Personaje::get_nombre(){
    return nombre;
}
void Personaje::set_raza(std::string raz){
    raza = raz;
}
std::string Personaje::get_raza(){
    return raza
}
void Personaje::damage(int damage){
    vida = vida - damage;
}
class Guerrero: public Personaje{
    public:
    Guerrero(): Personaje(){};
    Guerrero(int vi, int mag, std::string nom, std::string raz): Personaje(vi, mag, nom, raz){};
};
class Mago : public Personaje{

};