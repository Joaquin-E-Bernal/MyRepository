/*
CREAR UN PROGRAMA EN C QUE PIDA POR PANTALLA UN NUMERO DEL 1 AL 10 Y
MEDIANTE UNA FUNCION MUESTRE POR PANTALLA EL NUMERO ESCRITO EN LETRAS.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

#define tam 20

void num_a_letras(float);    //los prototipos son lo mas optimo para el compilador

int main(){
	float num;
	int i;
	
	printf("Ingrese un numero del 1 al 10:\n");
	scanf("%f",&num);
	if(num>=1 && num<=10) num_a_letras(num);
	else printf("No esta dentro del rango");
	
	return 0;
}

void num_a_letras( float num){
	char letras[tam];
	int i=num;
	
	if(num==i) sprintf(letras,"|En cadena\t%i|", i);    //(cadena, formateo, numero)
	else sprintf(letras,"|En cadena\t%f|", num);    //(cadena, formateo, numero)
	
	printf("%s",letras);
}