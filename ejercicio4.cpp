#include "iostream"

using namespace std;

int main ()
{
  float pr,c,t;
  string n;
  string a;
  cout << endl;
  cout << endl;
  cout << "ingrese su primer nombre" << endl;
  cout << endl;
  cin >> a;
  cout << endl;
  cout << endl;
  cout << "Ingrese el nombre del producto" << endl;
  cout << endl;
  cin>> n;
  cout << endl;
  cout << endl;
  cout << "ingrese el precio del producto (en dolares)" << endl;
  cin >> pr;
  cout << endl;
  cout << endl;
  cout << "ingrese la cantidad de producto comprado" << endl;
  cin >> c;
  cout << endl;
  t= (pr*c);
  cout << a << " el total de dinero gastado en " << n << " es de "  <<t << " dolares";
  cout << endl;
  cout << endl;
  return 0;






}


