#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define tamanio 10

int main(){
	char oracion[tamanio]={};
	long int ora_num;
	
	gets(oracion);
	fflush(stdin);
	
	ora_num=atoi(oracion);
	
	printf("\n%i",atoi(oracion));
	
	return 0;
}