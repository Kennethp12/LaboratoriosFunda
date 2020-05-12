#include "iostream"
#include "conio.h"
#include "math.h"

using namespace std;
int main ()

{
    int a;
    int b;
    int c;

    float x1;
    float x2;
    cout << endl;
    cout << endl;

    cout << "Este programa nos servira para calcular la formula general con valores dados"<< endl;
    cout << endl;
    cout << endl;
    cout << "Ingrese un numero a" << endl;
    cout << endl;
    cin >> a;
    cout << endl;
    cout << "Ingrese un numero b" << endl;
    cout << endl;
    cin >> b;
    cout << endl;
    cout << "Ingrese un numero c" << endl;
    cout << endl;
    cin >> c;
    cout << endl;
    x1= (-b+(sqrt(b*b-4*a*c)))/(2*a);
    x2= (-b-(sqrt(b*b-4*a*c)))/(2*a);
    cout << endl;
    cout <<"x1 = ";
    cout << x1;
    cout << endl;
    cout << endl;
    cout << "x2 = ";
    cout << x2;
    cout << endl;
    cout << endl;
    return 0;

}
