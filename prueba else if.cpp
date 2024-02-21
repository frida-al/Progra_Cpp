#include <iostream>
int main(){
    int num;
    std::cout<<"Dame un número";
    std::cin >> num;
    if (num == 0){
        std::cout<<"cero";
    }
    else if (num == 5){
        std::cout<<"cinco";
    }
    else{
        std::cout<<"Otro";
    }
    return 0;
}