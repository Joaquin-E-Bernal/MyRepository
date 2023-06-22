/*
Generar numeros random en un vector y luego mostrarlos
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

#define tam 20

int main(){
	int i,enteros[tam];
	
	for(i=0;i<tam;i++) enteros[i]=rand()%100;//rango: de 0 a 99
	for(i=0;i<tam;i++) printf("| %i ",enteros[i]);
	
	return 0;
}