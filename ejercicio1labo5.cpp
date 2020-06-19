#include "iostream"
#include "math.h"

using namespace std;



int main ()
{
    int a,b,residuo;
    cout << "Este programa nos servira para hallar el mcd con la teoría de Euclides" << endl;
    cout << endl;
    cout << "Introduzca su dividendo" << endl;
    cin >> a;
    cout << "Introduzca el divisor" << endl;
    cin >> b;
    residuo= a%b;
    if(residuo == 0){
        cout << "El MCD es " << b << endl;
    }
    while (residuo != 0)
    {
        a=b;
        b=residuo;
        residuo= a%b;
        if (a%b == 0){
            cout << "El MCD es " << b << endl;
           break;
        }
    }
    return 0;


}