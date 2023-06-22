/*
DADA UNA COMPRA DE 30 PCs PARA UNA EMPRESA, CADA UNA CUESTA 11500 PESOS.

EL PROVEEDOR ME HACE UN 20% DE DESCUENTO.
EL ENVIO ME COBRA UN 5% DEL TOTAL.
EL SEGURO DE TRASLADO ES 12% DEL TOTAL, EL CUAL SE DEVUELVEN SI LOS EQUIPOS LLEGAN BIEN.

OBTENER:
EL PRECIO SIN DESCUENTOS.
EL PRECIO CON TODOS LOS DESCUENTOS SI TODAS LAS PC LLEGAN BIEN.
EL PRECIO CON TODOS LOS DESCUENTOS SI LAS PC LLEGAN MAL.
SOLAMENTE EL PRECIO DEL DESCUENTO.
SOLAMENTE EL PRECIO DEL ENVIO.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

#define tam 20

int main(){
	int cant_u=30, exitoso;
	float pc=11500, precio=cant_u*pc;
	float descuento=precio*20/100;    //debo restarlo
	float envio=precio*5/100;    //debo sumarlo
	float seguro=precio*12/100;    //debo restarlo si los equipos llegan mal
	
	printf("Los equipos llegaron bien?(si=1)\n");
	scanf("%i",&exitoso);
	printf("\nSeguro:\t\t\t\t$%.2f\n",seguro);
	printf("Precio neto:\t\t\t$%.2f\n\n",precio);
	printf("Descuento del %%%.1f:\t\t$%.2f\n",descuento*100/precio,descuento);
	printf("Cobro del %%%.1f por envio:\t$%.2f\n\n",envio*100/precio,envio);
	if (exitoso==1)	printf("Precio total:\t\t\t$%.2f\nLos equipos llegaron BIEN",precio-descuento+envio);
	else printf("Precio total:\t\t\t$%.2f\nLos equipos llegaron MAL",precio-descuento+envio+seguro);
	return 0;
}