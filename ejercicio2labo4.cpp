#include "iostream"

using namespace std;

int main ()
{
    cout << endl;
    cout << "Este programa nos servira para saber si un numero es par o impar" << endl;
    int n; 
    cout << endl;
    cout << endl;
    cout << " Digite cualquier numero " << endl;
    cout << endl;
    cin >> n;
    if (n%2== 0){
        cout << endl;
    cout << n << " es par" << endl;
}
else{
    cout << endl;
    cout << n << " es impar "  << endl;
}
return 0;
}


