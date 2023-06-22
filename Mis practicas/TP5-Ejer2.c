#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
/*
main...
ESCRIBIR UN PROGRAMA EN C QUE PERMITA INGRESAR:
LAS TRES NOTAS DE UN ALUMNO,
CALCULAR EL PROMEDIO
E INFORME SI ESTA APROBADO O DESAPROBADO.

funcion...
EL PROMEDIO DEBERA CALCULARSE EN LA FUNCION RROMEDIO():

QUE RECIBIRA POR REFERENCIA:
LAS NOTAS

Y DEBERA RETORNAR:
EL VALOR DEL PROMEDIO

(PARA EVALUAR LA CONDICION EN EL CUERPO PRINCIPAL)
*/

float PROMEDIO( float *notas_punt);

int main(){
	float notas[3];
	int i;
	
	//printf("Ingrese 3 notas:\n");
	for(i=0;i<3;i++){
		printf("Ingrese la nota nro %i:\t",i+1);
		scanf("%f",&notas[i]);
		fflush(stdin);
	}
	
	if(PROMEDIO(notas)>=7){
		printf("\nNota:\t%.2f\nAPROBADO",PROMEDIO(notas));
	}
	else printf("\nNota:\t%.2f\nDESAPROBADO",PROMEDIO(notas));
	getch();
	
	return 0;
}

float PROMEDIO( float *notas_punt){
	return (notas_punt[0]+notas_punt[1]+notas_punt[2])/3;
}