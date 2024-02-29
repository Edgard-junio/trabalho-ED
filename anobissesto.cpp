#include <iostream>

int main() {
    int iano = 2000;
    
    if (iano % 4 == 0 && (iano % 100 != 0 || iano % 400 == 0)) {
        std::cout << iano << "\tÉ um ano bissexto";
    }
    else {
        std::cout << iano << "\tNão é um ano bissexto";
    }

    return 0;
}