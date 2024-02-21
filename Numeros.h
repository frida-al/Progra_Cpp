#include <iostream>
class Flores{
	public:
		std::string tipo_flor();
		void setColor(char col);
	private:
		std::string tipo;
		int color;
};
void setColor(char col){
     int color = col;
}
std::string Flores::tipo_flor(){
	if (color == 'a'){
		tipo = "Rosa";
	}
	else if (color == 'b'){
		tipo = "Cempasuchil";
	}
	else if (color == 'c'){
		tipo = "Lavanda";
	}
	return tipo;
}