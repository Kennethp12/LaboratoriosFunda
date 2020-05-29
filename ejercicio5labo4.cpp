#include "iostream"
#include "string.h"
#include "conio.h"

using namespace std;

int main ()
{
    string palabra;
    string letra1;
    string letrafinal;
    int longitud;
    cout << endl;
    cout << endl;
    cout << "Este programa nos servira para identificar si una palabra empieza y termina por la misma letra" << endl;
    cout << endl;
    cout << "Escriba una palabra" << endl;
    cout << endl;
    cin >> palabra;
    longitud = palabra.size();
    letra1 = palabra.substr(0, 1);
    letrafinal = palabra.substr (longitud  -1, 1);
    if (letra1 == letrafinal){
        cout << endl;
        cout << "La palabra ingresada empieza y termina con la misma letra" << endl;
        cout << endl;
    }
    else{
        cout << endl;
        cout << "La palabra ingresada no empieza ni termina con la misma letra" << endl;
       
    }
    
    return 0;

}
