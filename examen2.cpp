#include "iostream"
#include "stdlib.h"
#include "time.h"
using namespace std;
int main()
{
    int n, dato, contador= 4;

    srand(time(NULL));
    dato = 1 + rand()% (100);
    cout << endl;
    cout << endl;

    cout << "Este programa contiene un numero del 1 al 100, tienes 5 intentos para adivinarl el numero y ganar el premio, si no, debes volver a correr el programa e intentarlo otra vez" << endl;
    cout << endl;
    cout << endl;

    do{
        cout <<"Digite un numero"<< endl;
        cin >> n;
        if (n> dato){
            cout << endl;
            cout << endl;
            cout << "Por favor digite un numero menor" << endl;
            cout << endl;
            cout << "Numero de intentos restantes " << contador<< endl;
            cout << endl;
        }
        else if(n<dato){
            cout << endl;
            cout << "Por favor digite un numero mayor" << endl;
            cout << endl;
            cout << "Numero de intentos restantes " << contador << endl;
        }
        contador --;
         if(contador == -1){
             cout << endl;
             cout << endl;
            cout << "Has superado el numero de intentos permitidos, vuelve a intentarlo" << endl;
            cout << endl;
            cout << endl;
            system ("pause");

        }

    }while (n!= dato);

    cout << "Felicidades, adivinaste el numero" << endl;
    cout << "Numero de intentos" << contador << endl;


    system ("pause");
    return 0;
}