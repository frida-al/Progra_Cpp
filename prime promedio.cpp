#include <iostream>

bool is_prime(int num){
    bool prime = true;
	if  (num % 2 != 0 && num % 3 != 0 && num % 5 != 0 || num == 2 || num == 3 || num == 5 || num == 7) {
        return prime;
        }
	else{
        prime = false;
        return prime;
        }
}

float promedio(float lista[], int tam){
    float total;
    float acum = 0;
    for(int i = 0; i < tam; i++){
        std::cout << "Valor: "; 
        std::cin >> lista[i];
        acum = acum + lista[i];
            }
    total = acum / tam;
    return total;
}

int main(){
    int num;
    float res;
    int tam;
    float lista[0];
    std::cout << "Type a number: ";
	std::cin >> num; 
    if (is_prime(num) == 1) 
        std::cout << "True"<< std::endl;
    else 
        std::cout << "False"<< std::endl;
    std::cout << "Size: ";
	std::cin >> tam; 
    res = promedio(lista, tam);
    std::cout << res;
    return 0;
    }