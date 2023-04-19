// Operaciones aritmeticas
// Se ingresan por teclado dos valores numericos enteros
// Se pide calcular e informar por consola
// La suma a + b
// La diferencia a - b
// El producto a * b
// El cociente a / b , aceptando que b es distinto de 0

#include <iostream>

int main() {

    // Se ingresan por teclado dos valores numericos enteros

    int a;
    int b;

    std::cout << "Ingresar el primer valor: ";
    std::cin >> a;

    std::cout << "Ingresar el segundo valor: ";
    std::cin >> b;

    int resultado;

    // La suma a + b
    resultado = a + b;
    std::cout << "El resultado de la suma es: " << resultado << std::endl;

    // La diferencia a - b
    resultado = a - b;
    std::cout << "El resultado de la diferencia es: " << resultado << std::endl;

    // El producto a * b
    resultado = a * b;
    std::cout << "El resultado del producto es: " << resultado << std::endl;

    // El cociente a / b

    if ( b != 0 )
    {
            resultado = a / b;
            std::cout << "El cociente de a/b es " << resultado << std::endl;
    } else {
        std::cout << "El cociente no se puede realizar porque el valor de b es 0.";
        }  
    return 0;

}