#include<stdio.h>
#include<conio.h>

float inflacion (float dolar_inicial, float dolar_final, float pesos);

int main(){
	float dolar_i=100, dolar_f=200, pesos=500;
	
	inflacion(dolar_i, dolar_f, pesos);
	getch();
	
	return 0;
}

float inflacion (float dolar_inicial, float dolar_final, float pesos){
	float equivalencia_inicial=pesos/dolar_inicial, equivalencia_final=pesos/dolar_final, porcentaje;
	
	porcentaje=(equivalencia_final*100)/equivalencia_inicial;
	printf(" Inflaci%cn del +%%%.f:\n",162,porcentaje);
	printf(" Inicial:\tUSD 1 = $%.2f \t$%.2f = USD %.2f\n",dolar_inicial,pesos,equivalencia_inicial);
	printf(" Final:  \tUSD 1 = $%.2f \t$%.2f = USD %.2f\n ",dolar_final,pesos,equivalencia_final);
	
	return porcentaje;
}