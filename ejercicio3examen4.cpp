#include "iostream"
#include "string.h"
#include "stdlib.h"
using namespace std;

void NotasArray(float AlumNotas[])
{
    for (int i = 0; i <5; i++){
        cout << "Calificaciones: "<< i+1 << endl;
        cin>> AlumNotas[i];
    }

}
void Promedio(float AlumNotas[])
{
    float NotaFinal = 0;

    for( int i = 0; i<6; i++){
        NotaFinal= NotaFinal + (AlumNotas[i] * 0.2);

    }

    if(NotaFinal>= 6){
        cout << endl;
        cout << "El alumno ha aprobado la materia con una nota de: " << NotaFinal << endl;
        cout << endl;
    }
    else{
        cout << endl;
        cout << "El alumno ha reprobado la materia con una nota de: " << NotaFinal << endl;
        cout << endl;
    }
}

int main(){
    float AlumNotas[5];
    int C;
    cout << endl;
    cout << "Ingrese la cantidad de alumnos a promediar: " << endl;
    cout << endl;
    cin >> C;
    for(int i= 0; i< C; i++){
        cout << endl;
        cout << "Digite las notas del alumno " << i+1 << endl;
        cout << endl;
        NotasArray(AlumNotas);
        Promedio(AlumNotas);
    }
    return 0;
}
