/*
UNA CEREALERA DESEA CLASIFICAR SUS CLIENTES DE ACUERDO A LAS TONELADAS QUE LE COMPRAN:

CLIENTE:
MENOS DE 100 TONELADAS: CHICO.
ENTRE 100 Y 300 TONELADAS: MEDIANO.
MAS DE 300 TONELADAS: GRANDE.

SE DESEA DISENIAR UN ALGORITMO QUE PERMITA EL INGRESO DE LAS TONELADAS POR CLIENTE.

FINALIZA EL INGRESO DE DATOS CUANDO SE INGRESE UN CLIENTE IGUAL A 000.
LUEGO MUESTRE LA SIGUIENTE INFORMACION POR PANTALLA:
CANTIDAD DE CLIENTES
PROMEDIO DE TONELADAS VENDIDAS POR CATEGORIA
EL TOTAL DE TODAS LAS TONELADAS VENDIDAS.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main(){
	int tonel, tonel_t=0, num_client, cant_client=0;
	float prom=0;
	
	printf("Ingrese su numero de cliente:\n");
	scanf("%i",&num_client);
	
	while(num_client!=000){
		printf("Toneladas compradas:\n");
		scanf("%i",&tonel);
		tonel_t+=tonel;
		cant_client++;
		
		if(tonel<100) printf("CLIENTE CHICO");
		else if(tonel>300) printf("CLIENTE GRANDE");
		else printf("CLIENTE MEDIANO");
		getch();
		
		system("cls");
		printf("Ingrese su numero de cliente:\n");
		scanf("%i",&num_client);
	}
	
	if(cant_client!=0) prom=tonel_t/cant_client;
	printf("Clientes totales:\t\t%i\n",cant_client);
	printf("Toneladas vendidas totales:\t%i\n",tonel_t);
	printf("Promedio de toneladas vendidas:\t%.2f\n",prom);
	getch();
	
	return 0;
}