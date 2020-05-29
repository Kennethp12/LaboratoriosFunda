#include "iostream"
#include "conio.h"
#include "string.h"

using namespace std;

int main ()
{
    int longitud;
    char frase [200];
    cout << endl;
    cout << endl;
    cout << "Este programa nos servira para saber si la frase o palabra ingresada tiene mas de 10 caracteres y si estos son impares o pares" << endl;
    cout << endl;
    cout << endl;
    cout << "Digite una frase o palabra (cadena de caracteres)" << endl;
    cout << endl;
    cout << endl;
    cin. getline (frase,200);
    cout << endl;
    longitud = strlen (frase);
    if (longitud >10){
        cout << endl;
        cout << "La palabra/frase tiene mas de 10 caracteres" << endl;
    }
    else if(longitud < 10){
        cout << "La palabra/frase tiene menos de 10 caracteres" << endl;
        cout << endl;
    }
    else if(longitud == 10){
        cout << "La palabra/frase tiene 10 caracteres" << endl;
        cout << endl;
    }
    if (longitud%2==0){
        cout << endl;
        cout << endl;
        cout << "El numero de caracteres es par" << endl;
        cout << endl;
    }
    else{
        cout << endl;
        cout << endl;
        cout << "El numero de caracteres es impar" << endl;
        cout << endl;
        return 0;
    }
    

}
