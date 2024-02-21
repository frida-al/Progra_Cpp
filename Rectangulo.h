class Rectangulo {
	public:
		double calcArea();
		void setLargo(double la);
		void setAncho(double an);
	private:
		double largo, ancho; //Se establecen las variables
};

double Rectangulo :: calcArea() {
	return largo * ancho;
}
void Rectangulo :: setLargo(double la) {
	largo = la;
}
void Rectangulo:: setAncho(double an) {
	ancho = an;
}