#include "iostream"

using namespace std;

bool bisiesto (int);

int main()
{
    int a;
    cout << endl;
    cout << endl;
    cout << "Este programa nos servira para saber si un a\244o es bisiesto o no" << endl;
    cout << endl;
    cout << "Ingrese el a\244o" << endl;
    cout << endl;
    cin >> a;
    cout << endl;
    if(bisiesto (a)){
        cout << a << " Es bisiesto" << endl;
    }
    else{
        cout << a << " No es bisiesto" << endl;
    }
    return 0;
}

bool bisiesto (int a)
{
    if (a%4== 0){
        return true;
    }
    else if (a%4== 0 && a%100!= 0){
        return true;
    }
    else{
        return false;
    }
}