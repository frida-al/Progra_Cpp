#include <iostream>

float aproxima_PI(int N){
    int signo = 1;
    float acum = 0;
    int num2 = 4;
    for (float i = 1; i <= N; i = i + 2){
        acum = acum + ((1 / i) * signo);
        signo = signo * -1; 
    }
    return acum * num2;
}
float calcula_maximo(float lista[8]){
    float mayor = lista[0];
    for (int i = 0; i <= 8; i++){
        if (lista[i] > mayor){
            mayor = lista[i];
        }
    }
    return mayor;
}
int main(){ 
    int N = 18;
    float res;
    res = aproxima_PI(N);
    std::cout<< res << std::endl;
    float lista[8] = {3.0, 6.0, 9.0, 12.0, 15.0, 18.0, 22.0, 25.5};
    float res1;
    res1 = calcula_maximo(lista);
    std::cout << res1;
    return 0;
}
