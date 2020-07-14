#include <iostream>
#include<stdlib.h>
#include <string>
#include <string.h>


using namespace std;

const int longCad = 20;
    
    struct Precioproducto{ 
        char Nombreproducto [longCad + 1];
        int cantidad;
        float precio;
        float Preciototal;
    };

void llenarinfo (Precioproducto Infoproducto[], int n) 
{   

    string mainCad;

    for (int i = 0; i < n; i++) 
    {
        cout << endl;
        cout << "Producto numero : " << (i + 1) << "\n";
        cout << endl;
        cout << "Nombre del producto: " << "\n";
        cout << endl;
        getline(cin, mainCad, '\n');
        strncpy(Infoproducto[i].Nombreproducto, mainCad.c_str(), longCad);
        Infoproducto[i].Nombreproducto[longCad] = '\0';
        cout << endl;
        cout << "Cantidad de items de dicho producto:" << "\n";
        cout << endl;
        cin >> Infoproducto[i].cantidad;
        cout << endl;
        cout << "Precio por unidad de cada articulo : $" << "\n";
        cout << endl;
        cin >> Infoproducto[i].precio;
        cin.ignore(100,'\n');

    }

}

void Preciototal (Precioproducto Infoproducto[], int n) 
{

    for (int i = 0; i < n; i++) 
    {
    
        Infoproducto[i].Preciototal = ( Infoproducto[i].precio * Infoproducto[i].cantidad );

    }
        

}

void Factura (Precioproducto Infoproducto[], int n) 
{
    cout << endl;

    cout << "Imprimiendo su factura, por favor espere..........";
    cout << endl;

    for (int i = 0; i < n; i++) 
    {
        cout << endl;
    
        cout << "Producto numero: " << (i + 1) << "\n";
        cout << endl;
        cout << "Nombre del producto: " << Infoproducto[i].Nombreproducto << "\n";
        cout << endl;
        cout << "Cantidad de producto comprado: " << Infoproducto[i].cantidad << "\n";
        cout << endl;
        cout << "Precio por unidad de cada articulo: " << Infoproducto[i].precio << "\n";
        cout << endl;
        cout << "Precio total por producto: " << Infoproducto[i].Preciototal << "\n";
        cout << endl;

    }
        

}

float Totalapagar(Precioproducto Infoproducto[], int n) 
{       

    float totalapagar = 0;

    for (int i = 0; i < n; i++) 
    {
    
        totalapagar += Infoproducto[i].Preciototal;

    }
        
    return totalapagar;

}

int main() 
{
    
    int n;
    
    cout << endl;

    cout << "Cantidad de productos que desea procesar? : ";
    cout << endl;
    
    cin >> n;
    cin.ignore(100,'\n');

    Precioproducto Infoproducto[n]; 

    llenarinfo(Infoproducto, n);
    
    Preciototal(Infoproducto, n);
    
    Factura(Infoproducto, n);
    
    cout << "Su total a pagar es de: $" << Totalapagar(Infoproducto, n);
    cout << endl;

}