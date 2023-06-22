#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define TAMANIO 20

int main(){
	char oracion[TAMANIO]={" hola "};
	char *oracpunt;
	
	printf("|%p|\n\n",oracion);
	
	//asignaciones al puntero
		oracpunt=oracion;
		//oracpunt=&oracion[0]; //o puedo probar dandole un valor especifico de la cadena
	//muestra variable
		printf("|%i|\n",*oracpunt);
		printf("|%c|\n",*oracpunt);
		//printf("|%s|\n",*oracpunt);
		printf("|%p|\n\n",*oracpunt);
	
	//muestra memoria
		printf("|%i|\n",oracpunt);//cadena en la que se guarda
		//printf("|%c|\n",ora);
		printf("|%s|\n",oracpunt);//toda la cadena
		printf("|%p|\n\n",oracpunt);
		printf("|%p|\n\n",oracpunt[0]);//muestra un elemento de la cadena
	
	return 0;
}