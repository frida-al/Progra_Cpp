#include <iostream>
#include "Rectangulo.h"

int main() {
    Rectangulo rect;
    double area;

    rect.setLargo(10);
    rect.setAncho(5);
    area = rect.calcArea();
    std::cout << "Area is " << area << std::endl;
    return 0;
}