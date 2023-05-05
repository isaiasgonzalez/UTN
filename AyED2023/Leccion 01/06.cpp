// Se ingresan tres valores numericos enteros diferentes entre si
// Informar cual es el menor, el del medio, y el mayor

#include <iostream>

int main() {

    // Se ingresan tres valores numericos enteros diferentes entre si

    int a, b, c;

    std::cout << "Ingrese tres valores numericos diferentes entre si: " << std::endl;
    std::cin >> a >> b >> c;

    // Informar cual es el menor, el del medio y el mayor

    if ( a > b && a > c)
    {
        std::cout << a << " es el mayor." << std::endl;

            if ( b > c )
            {
                std::cout << b << " es el del medio" << std::endl;
                std::cout << c << " es el menor." << std::endl;
            } else
            {
                std::cout << c << " es el del medio" << std::endl;
                std::cout << b << " es el menor." << std::endl;
            }
            

    } else if ( b > a && b > c )
    {
        std::cout << b << " es el mayor." << std::endl;

            if ( a > c )
            {
                std::cout << a << " es el del medio" << std::endl;
                std::cout << c << " es el menor." << std::endl;
            } else
            {
                std::cout << c << " es el del medio" << std::endl;
                std::cout << a << " es el menor." << std::endl;
            }
            
    } else
    {
        std::cout << c << " es el mayor." << std::endl;

        if ( a > b )
        {
            std::cout << a << " es el del medio" << std::endl;
            std::cout << b << " es el menor." << std::endl;
        } else
        {
            std::cout << b << " es el del medio" << std::endl;
            std::cout << a << " es el menor." << std::endl;
        }
        
    }
    
    return 0;

}