#include <iostream>

int main() {
   /* int a = 0;
    int b = 0;

    for (int i = 0; i <= 50; i++) {
        if (i % 2 != 0) {
            if (i <= 25) {
                a += i;
            } else {
                b += i;
            }
        }
    }

    std::cout << "la suma de los numeros impares de la variable a son: " << a << "\n";
    std::cout << "la suma de los numeros pares numeros pares de la variable b son: " << b << "\n";
*/

  int  numero = 0;

    while (numero <= 30 && numero % 2 == 0) {
        numero += 3;
    }
    std::cout << "El primer numero impar despues de 30 es: " << numero << "\n";


    return 0;
}
