// Se ingresan por teclado dos valores numericos enteros
// Informar cual es el mayor y cual es el menor
// Si son iguales, mostrar un mensaje con el siguiente texto:
// " Los valores ingresados son iguales "

#include <iostream>

int main() {

    // Se ingresan por teclado dos valores numericos enteros

    int a;
    int b;

    std::cout << "Ingresar dos valores numericos enteros: " << std::endl;
    std::cin >> a;
    std::cin >> b;

    // Informar cual es el mayor y cual es el menor

    if ( a > b ) {

        std::cout << a << " es mayor que " << b;

    } else if ( b > a)
    {
        std::cout << b << " es mayor que " << a;
    } else {
        std::cout << "Los valores ingresados son iguales";
    }
    
    return 0;

}