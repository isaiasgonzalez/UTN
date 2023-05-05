// Dada una terna de numeros que representen el dia, mes y año de una fecha
// Unificarlos en un unico valor AAAAMMDD

#include <iostream>

int main() {

    // Dada una terna de numeros que representen el dia, mes y año de una fecha

    int aaaa, mm, dd;

    std::cout << "Ingrese dia, mes y año: " << std::endl;
    std::cin >> dd >> mm >> aaaa;

    // Unificarlos en un unico valor AAAAMMDD

    aaaa = aaaa * 10000 ;
    mm = mm * 100;

    aaaa = aaaa + mm + dd;

    std::cout << aaaa << std::endl;

    return 0;

}