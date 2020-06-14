#include "iostream"
#include "math.h"
#include "conio.h"

using namespace std;

int main()
{
    float he;
    float st;
    float sueldor;
    float htrabajadas;
    float impuestos = 0;
    float seguro = 0.04;
    float afp= 0.0625;
    float impuestos2;
    string n;
    int i=0, ce= 0;

    cout << endl;
    cout << "Empleados a evaluar" << endl;
    cin>> ce;
    for (i= 0; i<ce; i++)
    {
        cout << "Digite el nombre del empleado" << endl;
        cin >> n;
        cout << endl;
        cout << "Digite la cantidad de horas trabajadas" << endl;
        cin >> htrabajadas;
        cout << "Ingrese sus horas extra realizadas" << endl;
        cin >> he;

        st=  (htrabajadas*1.75) + (he*2.50);// variable sueldo total

        if (st>500){
            impuestos= st* (seguro+afp+0.1);
            sueldor= (st- impuestos);
        }
        else if (st < 500){
            impuestos2 = st*(seguro+afp);
            sueldor = st- impuestos2;
        }
        cout << endl;
        cout << endl;
        cout << "El salario de los empleados es el siguiente" << endl;
        cout << endl;
        cout << endl;
        cout << n << endl;
        cout << endl;
        cout << "Tu salario total es " << st << endl;
        cout << endl;
        cout << "Tu salario real es " << sueldor << endl;
        cout << endl;
        return 0;






    }

}