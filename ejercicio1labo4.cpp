#include "iostream"

using namespace std;

int main ()
{
    cout << endl;
    cout << "Este programa nos servira para saber si un numero es divisible entre otro" << endl;
    int n,n2; 
    cout << endl;
    cout << endl;
    cout << "Digite el primer numero" << endl;
    cout << endl;
    cin >> n;
    cout << endl;
    cout << endl;
    cout << "Digite el segundo numero" << endl;
    cout << endl;
     cin >> n2;

    if (n%n2== 0){
        cout << endl;
    cout << n << " es divisble entre " << n2 << endl;
}
else{
    cout << endl;
    cout << n << " no es divisible entre " << n2 << endl;
}

}
