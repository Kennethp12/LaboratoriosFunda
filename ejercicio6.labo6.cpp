#include "iostream"
using namespace std;

int main ()
{
    int imp[100];

    cout << endl;
    cout << "Bienvenido, este programa le dira cuales son los primeros 100 numeros impares en orden descendente "  << endl;
    
    cout << endl;

    cout << "Los primeros 100 numeros impares son" << endl;
    for (int i = 100; i>= 0; i--){
        if (i%2 != 0)
        {
            imp[i] = i;
            cout << endl << imp[i] << endl;
        }
    }
    return 0;
}
