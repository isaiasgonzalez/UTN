// Se ingresan por teclado dos valores numericos enteros
// Calcular e informar el cociente a / b
// Validando que b sea distinto de cero
// En tal caso, mostrar un mensaje de error en la consola

#include <iostream>

int main() {

    // Se ingresan por teclado dos valores numericos enteros

    int a;
    int b;

    std::cout << "Ingresar el primer valor: ";
    std::cin >> a;

    std::cout << "Ingresar el segundo valor: ";
    std::cin >> b;

    // Calcular e informar el cociente a / b
    // Validando que b sea distinto de cero
    // En tal caso, mostrar un mensaje de error en la consola

    int resultado;

        if ( b != 0 )
    {
            resultado = a / b;
            std::cout << "El cociente de a/b es " << resultado << std::endl;
    } else {
        std::cout << "El cociente no se puede realizar porque el valor de b es 0.";
        }  
    
    return 0;
}