/*
9)    DADA LA CANTIDAD DE HORAS TRABAJADAS, LA ANTIGUEDAD Y LA CATEGORIA DEL EMPLEADO:
a. SABIENDO QUE COBRA 50 PESOS POR CADA ANIO TRABAJADO Y QUE EL
VALOR DE LA HORA SEGUN LA CATEGORIA:
    CAT 1= $10 x hora
    CAT 2= $20 x hora
    CAT 3= $25 x hora
    CAT 4= $30 x hora
b. DETERMINAR EL SUELDO DEL EMPLEADO.
c. INFORMAR SI EL SUELDO SUPERA LOS 1000 PESOS.

EFECTUAR EL EJERCICIO CON AL MENOS 2 FUNCIONES:
UNA PARA CALCULAR EL COBRO POR ANTIGUEDAD Y OTRA PARA CALCULAR EL COBRO POR HORAS
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>    //gets
//funciones pedidas: COBRO POR ANTIGUEDAD y COBRO POR HORAS
float cobro_x_antiguedad(int anios);
float cobro_x_hora(int horas,int categoria);

int main(){
    int hs,cat,anios;    //antiguedad
    float sueldo;

	printf(" Ingrese la cantidad de horas trabajadas:\n%c ",175);
    scanf("%d",&hs);
    fflush(stdin);
    
    printf(" Ingrese la antig%cedad\n%c ",129,175);
    scanf("%d",&anios);
    fflush(stdin);

    printf(" Ingrese la categor%ca\n%c ",161,175);
    scanf("%d",&cat);
    fflush(stdin);

    sueldo=cobro_x_antiguedad(anios)+cobro_x_hora(hs,cat);
    
	printf(" El sueldo de la categor%ca %d es $%.2f\n",161,cat,sueldo);
    if(sueldo>1000){
        printf(" El sueldo super%c los $1000\n",162);
    }
    getch();
}
float cobro_x_antiguedad(int anios){
	float cobro;
	
	cobro=anios*50;
	
	return cobro;
}
float cobro_x_hora(int horas,int categoria){
	float cobro;
	
	switch(categoria){
		case 1:
			cobro=horas*10;
			break;
		case 2:
			cobro=horas*20;
			break;
		case 3:
			cobro=horas*25;
			break;
		case 4:
			cobro=horas*30;
			break;
		default:
			printf("error");
	}
	
	return cobro;
}