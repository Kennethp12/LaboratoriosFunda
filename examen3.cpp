#include "iostream"

using namespace std;

int main ()
{
    int a;
    cout << endl;
    cout << "Este programa nos servira para saber si un a\244o es bisiesto o no" << endl;
    cout << endl;
    cout << "Ingrese un a\244o" << endl;
    cin >> a;

    if (a%400==0){
         cout << endl;
         cout << "El a\244o es bisiesto" << endl;
         cout << endl;
    }
    else if (a%4== 0 && a%100!= 0){
        cout << endl;
        cout << "El a\244o es bisiesto" << endl;
    }
    else{
        cout << "El a\244o no es bisiesto" << endl;
    }
    return 0;

}