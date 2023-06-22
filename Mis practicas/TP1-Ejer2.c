/*
Ejer 2 - Trabajo practico 1

ESCRIBIR UN PROGRAMA QUE LEA:
EXACTAMENTE 3 NUMEROS

Y LUEGO ESCRIBA LA SUMA DE TODOS ELLOS.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

#define tam 20

int main(){
	float num, acu_num=0;
	int i;

	for(i=0;i<3;i++){
		printf("Ingrese un numero:\t");
		scanf("%f",&num);
		acu_num+=num;
	}printf("\nSuma:  \t%.2f",acu_num);

	return 0;
}