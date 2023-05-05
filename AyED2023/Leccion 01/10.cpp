// Entre dos fechas indicadas por el usuario, 
// informar cuál es la más cercana a la actual

#include <iostream>
int abs(int n);
bool esBisiesto(int aaaa);
int distanciaEntreDosNumeros(int a, int b);

int main() {

    // Entre dos fechas indicadas por el usuario, 
    int a, b, aux;

    std::cout << "Ingresar dos fechas en AAAAMMDD: " << std::endl;
    std::cin >> a >> b;

    // Desglosar la fecha
    int pvaaaa, pvmm, pvdd;

    pvaaaa = a / 10000 ;

    pvmm = a / 100;
    aux = pvaaaa * 100;
    pvmm = pvmm - aux;

    aux = pvaaaa * 10000 + pvmm * 100;
    pvdd = a - aux;

    int svaaaa, svmm, svdd;

    svaaaa = b / 10000 ;

    svmm = b / 100;
    aux = svaaaa * 100;
    svmm = svmm - aux;

    aux = svaaaa * 10000 + svmm * 100;
    svdd = b - aux;
 
    // Fecha de referencia elegida por el programador

    int refaaaa = 2023, refmm = 05, refdd = 05;

    // Calcular la fecha mas cercana

        // Calcular que año esta mas cerca

        if ( distanciaEntreDosNumeros(refaaaa, pvaaaa) < distanciaEntreDosNumeros(refaaaa, svaaaa) )
        {
            // El primer año esta mas cerca
            std::cout << a << " es mas cerca a la fecha actual, " << refaaaa << refmm << refdd << std::endl;

        } else if ( distanciaEntreDosNumeros(refaaaa, pvaaaa) > distanciaEntreDosNumeros(refaaaa, svaaaa) )
        {
            // El segundo año esta mas cerca
            std::cout << b << " es mas cerca a la fecha actual, " << refaaaa << refmm << refdd << std::endl; 

        } else
        {
            // Los años son iguales
            // Calcular que mes esta mas cerca

            if ( distanciaEntreDosNumeros(refmm, pvmm) < distanciaEntreDosNumeros(refmm, svmm) )
            {
                // El primer mes esta mas cerca
                std::cout << a << " es mas cerca a la fecha actual, " << refaaaa << refmm << refdd << std::endl; 

            } else if ( distanciaEntreDosNumeros(refmm, pvmm) > distanciaEntreDosNumeros(refmm, svmm) )
            {
                // El segundo mes esta mas cerca
                std::cout << b << " es mas cerca a la fecha actual, " << refaaaa << refmm << refdd << std::endl; 
            } else
            {
                // Los meses tambien son iguales
                // Calcular que dia esta mas cerca
                
                if ( distanciaEntreDosNumeros(refdd, pvdd) < distanciaEntreDosNumeros(refdd, svdd) )
                {
                    // La primer fecha es la mas cercana
                    std::cout << a << " es mas cerca a la fecha actual, " << refaaaa << refmm << refdd << std::endl; 
                } else if ( distanciaEntreDosNumeros(refdd, pvdd) > distanciaEntreDosNumeros(refdd, svdd) )
                {
                    // La segunda fecha es la mas cercana
                    std::cout << b << " es mas cerca a la fecha actual, " << refaaaa << refmm << refdd << std::endl;
                } else
                {
                    // Las fechas son exactamente iguales
                    std::cout << "Las fechas son iguales" << std::endl;
                }
        }
    }
     return 0;       
    }
    
int abs(int n) {

    if ( n < 0 )
    {
        n = n * -1;
    }
    
    return n;
}

bool esBisiesto(int aaaa) {
    
    bool esBisiesto;

    if ( ((aaaa % 4) == 0 || (aaaa % 400) == 0 ) && (aaaa % 100) != 0 )
    {
        esBisiesto = true;
    } else
    {
        esBisiesto = false;
    }
    
    return esBisiesto;

}

int distanciaEntreDosNumeros(int a, int b) {
    int distancia;

    distancia = a - b;
    distancia = abs(distancia);

    return distancia;
}