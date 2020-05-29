#include "iostream"

using namespace std;

int main ()
{
    cout << endl;
    cout << "Este programa nos servira para saber si un numero es positivo, negativo o cero " << endl;
    int n; 
    cout << endl;
    cout << endl;
    cout << "Digite cualquier numero" << endl;
    cout << endl;
    cin >> n;
    cout << endl;
    cout << endl;
     if (n<0){
        cout << endl;
    cout << n << " es negativo " << endl;
}
else if (n>0) {
    cout << endl;
    cout << n << "  es positivo"<< endl;
}
else{
cout << " El numero es 0" << endl;
}


}