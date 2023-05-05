// Se ingresa por teclado un valor numerico entero, informar
// 1. La quinta parte de dicho valor
// 2. El resto que surge de dividir el valor ingresado en cinco partes iguales
// 3. La septima parte de la quinta parte del valor ingresado

#include <iostream>

int main() {

    // Se ingresa por teclado un valor numerico entero
    int n;
    std::cout << "Ingrese un valor numerico entero: ";
    std::cin >> n;

    int resultado;

    // 1. La quinta parte de dicho valor

    resultado = n / 5;
    std::cout << "La quinta parte de " << n << " es: " << resultado << std::endl;

    // 2. El resto que surge de dividir el valor ingresado en cinco partes iguales

    resultado = n % 5;
    std::cout << "El resto que surge de dividir " << n << " en cinco partes iguales es: " << resultado << std::endl;

    // 3. La septima parte de la quinta parte del valor ingresado

    resultado = ( n / 5 ) / 7;
    std::cout << "La septima parte de la quinta parte de " << n << " es: " << resultado << std::endl;

    return 0;

}