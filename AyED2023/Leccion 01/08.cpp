// Dado un numero de 8 digitos que representan una fecha
// Formato AAAAMMDD
// Mostrar por separado el dia, mes y año

#include <iostream>

int main() {

    // Dado un numero de 8 digitos que representan una fecha

    int fecha;
    std::cout << "Ingresar una fecha en formato AAAAMMDD: " << std::endl;
    std::cin >> fecha;

    // Mostrar por separado el dia, mes y año

    int dd, mm, aaaa, aux;

    // Sacamos el año

    // [AAAA]MMDD
    aaaa = fecha / 10000 ;

    // [AAAAMM]DD
    mm = fecha / 100 ;
    aux = aaaa * 100 ;

    // AAAA[MM]DD
    mm = mm - aux ;

    // AAAAMM[DD]

    aux = aaaa * 10000 + mm * 100 ;
    dd = fecha - aux ;

    // Mostrar el dia, mes y año

    std::cout << dd << "/" << mm << "/" << aaaa << std::endl;

    return 0;

}