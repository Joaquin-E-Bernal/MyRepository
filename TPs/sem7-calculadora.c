/*
La maquina calculadora puede efectuar las siguientes operaciones:
	suma
	resta
	multiplicacion
	division
   (entre dos operandos)

Para cada operacion...
	El operador debe ingresar los siguientes datos:
		Operando1: un numero real.
		Operando2: un numero real.

	Cada operacion puede ser representada por un caracter.

	Se ingresan operaciones mientras el operador indique "SI" a la pregunta: "Desea seguir ingresando operaciones SI/NO?"

Se pide informar por cada operacion:
	Calcular el resultado e informarlo por pantalla...
	Para ello debemos diseniar una funcion:
		Parametros:
			Dos operandos
			Caracter correspondiente al tipo de operacion.
		
		La funcion debera retornar al programa principal el resultado.
				
Para informar el resultado en el programa principal:
	Se debera diseniar otra funcion:
		Parametro:
			El valor del resultado
			
		Mostrarlo por pantalla.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

#define tam 3

float calcular(float,float,char);
void mostrar(float);

int main(){
	int num1,num2;
	char op,rta[tam];
	
	do{
		printf("Ingrese 2 numeros:\n");
		scanf("%i",&num1);
		fflush(stdin);
		scanf("%i",&num2);
		fflush(stdin);
		printf("Indique la operacion:\n");
		scanf("%c",&op);
		fflush(stdin);
		
		mostrar(calcular(num1,num2,op));
		
		printf("Desea seguir ingresando operaciones SI/NO?\n");
		gets(rta);
		fflush(stdin);
		system("cls");
	}while(!strcmp(rta,"SI"));    //devuelve 0 si es verdadero, por eso lo niego
	return 0;
}

float calcular(float num1,float num2, char op){
	float resultado=0;
	
	switch(op){
		case 's':
			resultado=num1+num2;
			break;
		case 'r':
			resultado=num1-num2;
			break;
		case 'm':
			resultado=num1*num2;
			break;
		case 'd':
			resultado=num1/num2;
			break;
		default:
			printf("Operacion invalida\n\n");
	}
	return resultado;
}

void mostrar(float resultado){
	printf("RESULTADO:\t%.2f\n\n",resultado);
}