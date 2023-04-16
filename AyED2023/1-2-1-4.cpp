// Se ingresan por teclado dos valores numericos enteros diferentes entre si
// Informar cual es el mayor

#include <iostream>

int main() {

    // Se ingresan por teclado dos valores numericos enteros diferentes entre si

    int a;
    int b;

    std::cout << "Ingresar dos valores numericos, diferentes entre si: " << std::endl;
    std::cin >> a;
    std::cin >> b;

    // Informar cual es el mayor

    if ( a > b)
    {
        std::cout << a << " es mayor que " << b << "." << std::endl;
    } else {
        std::cout << b << " es mayor que " << a << "." << std::endl;
    }

    return 0;
    
}