#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//FONDO COMUN DE INVERSION

/*
78% tasa efectiva anual



*/

int cantInvers(void);
int diasTotales(void);

int main()
{
	{//Fondos iniciales
		int inv=cantInvers(), fondos[inv], i=0, f=0;
		
		for(i=0;i<inv;i++)
		{
			printf("Fondo del inversor %i: ",i+1);
			scanf("%i",&f);
			fflush(stdin);
			printf("\n");
			
			fondos[i]=f;
		}
	}
	
	{/*/Proceso de inversion
		int d=diasTotales(), dia[inv][d], i=0;
		
		for(i=0;i<d;i++)
		{
			printf("");
		}
	}*/
	
	{//Ganancias
		
	}
	
	return 0;
}

int cantInvers(void)
{
	int f;
	
	printf("Cantidad de inversores: ");
	scanf("%i",&f);
	fflush(stdin);
	printf("\n");
	
	return f;
}

int interes(void)
{
	int d;
	
	printf("Cantidad de dias: ");
	scanf("%i",&d);
	fflush(stdin);
	printf("\n");
	
	return d;
}