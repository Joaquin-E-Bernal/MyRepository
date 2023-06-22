/*
ESCRIBIR UN PROGRAMA QUE LEA EXACTAMENTE:
3 NUMEROS

LUEGO ESCRIBA LA SUMA DE TODOS ELLOS.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

#define tam 20

int main(){
	float num1,num2,num3;
	
	scanf("%f",&num1);
	scanf("%f",&num2);
	scanf("%f",&num3);
	
	printf("\n\nSuma:\t%.2f",num1+num2+num3);
	
	return 0;
}