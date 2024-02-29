#include <iostream>

int main(){
    float altura = 1.5; //definindo o valor da altura
    float peso = 71.6; //definindo o valor do peso 
    float Indice = peso/(altura*altura); //calculoda do Indice de massa corporal

    if(Indice < 17) std::cout<<"Muito abaixo do peso";
    
    if(Indice >= 17 && Indice < 18.5) std::cout<<"Abaixo do peso";
    
    if(Indice >= 18.5 && Indice < 25) std::cout<<"Peso normal";
    
    if(Indice >= 25 && Indice < 30) std::cout<<"Acima do peso";
    
    if(Indice >= 30 && Indice < 35) std::cout<<"Obesidade";
    
    if(Indice >= 35 && Indice < 40) std::cout<<"Obesidade severa";
    
    if(Indice >= 40) std::cout<<"Obesidade mórbida";
    
    return 0;
}