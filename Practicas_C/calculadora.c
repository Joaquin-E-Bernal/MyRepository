#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>

#define tamanio 20

void calculadora();
float operar_A_B ( int *a, char *operacion,  int *b, char cuenta[tamanio]);

int main(){
	
	calculadora();
	getch();
	return 0;
}

void calculadora(){
	char cuenta[tamanio], operador;
	int a=0, b=0;
	
	printf("Realice una cuenta aritm%ctica:\n",130);
	gets(cuenta);
	fflush(stdin);
	
	printf("\nrta: %.2f\n",operar_A_B ( &a, &operador, &b, cuenta)); //3 direcciones de memoria, y 1 string
	
	printf("\nPrimer t%crmino: %i\nOperacion: %c\nSegundo t%crmino: %i",130,a,operador,130,b);
}

float operar_A_B ( int *a, char *operacion, int *b, char cuenta[tamanio]){
	int i=0, fin_cuenta=tamanio;
	float num=0, resultado;
	
	//sumatoria de caracteres del primer termino hasta encontrar un operador, eso me da A -> *a
	for(i=i;i<fin_cuenta;i++){
		switch(cuenta[i]){
			case '0':
				num=num*10+0;
				break;
			case '1':
				num=num*10+1;
				break;
			case '2':
				num=num*10+2;
				break;
			case '3':
				num=num*10+3;
				break;
			case '4':
				num=num*10+4;
				break;
			case '5':
				num=num*10+5;
				break;
			case '6':
				num=num*10+6;
				break;
			case '7':
				num=num*10+7;
				break;
			case '8':
				num=num*10+8;
				break;
			case '9':
				num=num*10+9;
				break;
			//operadores
			case '+':
				fin_cuenta=i;
				break;
			case '-':
				fin_cuenta=i;
				break;
			case '*':
				fin_cuenta=i;
				break;
			case '/':
				fin_cuenta=i;
				break;
		}
	}*a=num;
	
	*operacion=cuenta[i-1]; //asigna la operacion a realizar
	
	//sumatoria de caracteres del segundo termino, eso me da B -> *b
	fin_cuenta=tamanio-i;
	num=0;
	for(i=i;i<fin_cuenta;i++){
		switch(cuenta[i]){
			case '0':
				num=num*10+0;
				break;
			case '1':
				num=num*10+1;
				break;
			case '2':
				num=num*10+2;
				break;
			case '3':
				num=num*10+3;
				break;
			case '4':
				num=num*10+4;
				break;
			case '5':
				num=num*10+5;
				break;
			case '6':
				num=num*10+6;
				break;
			case '7':
				num=num*10+7;
				break;
			case '8':
				num=num*10+8;
				break;
			case '9':
				num=num*10+9;
				break;
			case ' ': //el espacio no afecta la cuenta
				break;
			default:
				fin_cuenta=i;
		}
	}*b=num;
	
	//realiza la operacion asignada
	switch(*operacion){
		case '+':
			resultado=*a+*b;
			break;
		case '-':
			resultado=*a+*b;
			break;
		case '*':
			resultado=*a*(*b);
			break;
		case '/':
			resultado=*a/(*b);
			break;
	}
	
	return resultado;
}