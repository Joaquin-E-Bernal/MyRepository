#include<stdio.h>
#include<stdlib.h>				
#include<conio.h>
#include<math.h>
#include<string.h>

//Una compañía inmobiliaria tiene 25 vendedores. Cada operación que hace un 
//vendedor se guarda con las siguientes informaciones: número del vendedor (int), nombre 
//del vendedor (20 char), monto de la venta (float). Estas informaciones se almacenarán 
//en tres vectores, y se deberá escribir un programa que calcule el total de ventas realizado 
//por cada uno de los vendedores por separado, expresando el resultado como:


int main()
	{
	int numv[2],i,cantv[2];
	float monto[2];
	char nom[2][20];
	
	for(i=0;i<2;i++)
		{
				fflush(stdin);
				printf("INGRESE NUMERO DEL VENDEDOR, INGRESO N %i: ", i);
				scanf("%d",&numv[i]);
					
				fflush(stdin);	
				printf("\nINGRESE NOMBRE DEL VENDEDOR : ");
				gets(nom[i]);
					
					fflush(stdin);
				printf("\nINGRESE EL MONTO DE LA VENTA : ");
					scanf("%f",&monto[i]);	
					
					cantv[i] = cantv [i] + 1;
											//COMO CALCULO EL TOTAL DE VENTAS REALIZADO//
		}
	
	
	for(i=0;i<2;i++)
		{
			printf("\nNUMERO DEL VENDEDOR : %d",numv[i]);
			printf("\nNOMBRE DEL VENDEDOR : %s",nom[i]);
			printf("\nTOTAL DE VENTAS : %i",cantv[i]);
		}
	
}
