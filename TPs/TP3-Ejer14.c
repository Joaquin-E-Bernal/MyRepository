/*
CREAR UNA FUNCION QUE PERMITA CALCULAR EL FACTORIAL DE UN NUMERO
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

#define tam 20

int main(){
	int num,i,rta=1;
	
	printf("Ingrese un numero:\n");
	scanf("%i",&num);
	for(i=1;i<=num;i++){
		rta*=i;
	}
	printf("Factorial del numero:\n");
	printf("%i",rta);
	
	return 0;
}