#include <iostream>
using namespace std;

bool esAnioBisiesto(int yyyy) {
    bool esBisiesto = false;

    // Es divisible por 4?
    // Revisar si hay diferentes formas de verificar bisiesto

    if ( yyyy % 4 == 0 ) {
        esBisiesto = true;
    } else {
        if ( yyyy % 400 == 0 && yyyy % 100 != 0 ) {
            esBisiesto = true;
        }
    }

    return esBisiesto;
}

int diasDelMes(int mm, int yyyy) {

    // En principio son 31 dias

    int dd = 31;

    // Si es uno de los meses de 30 dias

    if ( mm == 4 || mm == 6 || mm == 0 || mm == 11 ) {
        dd = 30;
    } else {
        if ( mm == 2 ) {
            // Si el yyyy es bisiesto, entonces son 29 dias
            if ( esAnioBisiesto(yyyy) ) {
                dd = 29;
            } else {
                dd = 28;
            }
        }
    }

    return dd;

}

bool validarFecha(int dd, int mm, int yyyy) {
    // Cuantos dias tiene el mes
    int maxDias = diasDelMes(mm, yyyy);

    // Si se cumplen las condiciones, la fecha es correcta
    bool ret;
    if (
        ( dd > 0 && dd <= maxDias ) &&
        ( mm > 0 && mm <= 12 ) &&
        ( yyyy >= 0 )
    )
    {
        ret = true;
    }
    else 
    {
        ret = false;
    }
    
    return ret;
}

int main () {

    int dd, mm, yyyy;

    cout << "Ingrese dia (dd), mes (mm), año (yyyy): ";
    cin >> dd >> mm >> yyyy;

    // Validamos la fecha ingresada

    bool fechaOk = validarFecha(dd, mm, yyyy);

    // Si no es correcta mostramos un error

    if ( !fechaOk ) // La negacion dice: si fechaOk no es correcta, proceder a yes.
    {
        cout << "La fecha ingresada es incorrecta";
    }
    
    else
    {
        cout << "Todo bien :)";
    }

    return 0;


}