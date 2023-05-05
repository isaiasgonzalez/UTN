// Se ingresan tres valores que representen las longitudes de los lados de un triangulo
// Informar el tipo de triangulo (isosceles, equilatero o escaleno)

#include <iostream>

int main() {

    // Se ingresan tres valores

    int a, b, c;

    std::cout << "Ingresar los valores de cada lado: " << std::endl;
    std::cin >> a >> b >> c;

    //Informar el tipo de triangulo

    if ( (a == b) && (b == c) )
    {
        std::cout << "Es un triangulo equilatero" << std::endl;
    } else if ( a != b && a != c && c != b )
    {
        std::cout << "Es un triangulo escaleno" << std::endl;
    } else
    {
        std::cout << "Es un triangulo isosceles" << std::endl;
    }
    
    return 0;
}