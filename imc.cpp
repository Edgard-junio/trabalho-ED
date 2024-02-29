#include <iostream>

int main() {
    float altura = 1.5; //definindo o valor da altura em metros
    float peso = 56; //definindo o valor do peso em kg

    if (altura <= 0 || peso <= 0) {
        std::cout << "Altura ou peso inválidos";
    } else {
        float Indice = peso / (altura * altura); //calculoda do Indice de massa corporal

        if (Indice < 17)
            std::cout << "Muito abaixo do peso";
        else if (Indice < 18.5)
            std::cout << "Abaixo do peso";
        else if (Indice < 25)
            std::cout << "Peso normal";
        else if (Indice < 30)
            std::cout << "Acima do peso";
        else if (Indice < 35)
            std::cout << "Obesidade";
        else if (Indice < 40)
            std::cout << "Obesidade severa";
        else
            std::cout << "Obesidade mórbida";
    }

    return 0;
}
