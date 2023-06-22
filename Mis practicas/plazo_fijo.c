#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

float plazo_fijo(float fondos,int dias,float tasa);

int main (){
	int dias=0;
	float tasa=0,fondos_inicial=0,fondos=0,mas_fondos=0,ganancias=0;
	int dias_acu=0;
	char rta[3]={};
	int cont_inversiones=1;
	
	printf(" Ingrese el fondo inicial:\n%c $",175);
	scanf("%f",&fondos_inicial);
	fflush(stdin);
	system("cls");
	
	fondos=fondos_inicial;
	
	do{
		printf(" Fondos:\t$%.2f\n N%cmero inversi%cn:\t%i%c\n\n",fondos,163,162,cont_inversiones,167);
		
		printf(" Ingrese a cu%cntos d%cas:\n%c +",160,161,175);
		scanf("%i",&dias);
		fflush(stdin);
		
		if(dias==-999111){
			printf(" \nIngrese m%cs fondos:\n%c +$",160,175);
			scanf("%f",&mas_fondos);
			fflush(stdin);
			fondos+=mas_fondos;
			printf("  total $%.2f\n",fondos);
			printf("\n Reanudar inversi%cn?\t\"Si\"/No: otra tecla\n%c ",162,175);
		}
		else{
			dias_acu+=dias;
			
			printf("  total %i\n",dias_acu);
			
			printf("\n Ingrese la tasa de inter%cs:\n%c %%",130,175);
			scanf("%f",&tasa);
			fflush(stdin);
			
			ganancias=plazo_fijo(fondos, dias, tasa);
			printf("\n Ganancias a %i d%cas con una tasa del %.3f%%:\t+$%.2f\n",dias,161,tasa,ganancias);
			
			fondos+=ganancias;
			cont_inversiones++;
			
			printf("\n Realizar otra inversi%cn?\t\"Si\"/No: otra tecla\n%c ",162,175);
		}
		gets(rta);
		fflush(stdin);
		system("cls");
		
		if(!strcmp(rta,"si")) rta[0]='S';
	}while(!strcmp(rta,"Si"));
	
	system("cls");
	printf(" Fondos iniciales: $%.2f\n\n",fondos_inicial);
	printf(" Ganancia total en %i d%cas: +$%.2f\n\n Fondos totales: $%.2f\n ",dias_acu,161,(fondos-fondos_inicial),fondos);
	getch();
	
	return 0;
}

float plazo_fijo(float fondos,int dias,float tasa){
	return ((fondos*dias*tasa)/100)/360;
}