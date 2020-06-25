#include <stdio.h>
#include <stdlib.h>
 
int main(){
	int arreglo [10],i,n,contador;
	contador=0;
	printf ("\n");

	printf( "Este programa servira para ingresar 10 numeros y que el usuario ingrese el dato que quiere saber cuantas veces esta");

	printf ("\n");

 
	for (i=0; i<10; i++){
		printf("\nDigite el %d numero de la lista: ",i);
		scanf("%d",&arreglo[i]);
	}
	printf ("\n");
	printf("Digite el numero que quiere saber cuantas veces se repite: ");
	scanf("%d",&n);
	for (i=0; i<10; i++){
		if (n == arreglo[i]){
			contador++;
		}
	}
	printf ("\n");
	printf("El numero %d, se repite %d",n,contador);
	printf ("\n");
	return 0;
}
