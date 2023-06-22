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
	printf(" Inicial:\tUSD 1 = $%.2f \tUSD %.2f = $%.2f\n",dolar_inicial,pesos/dolar_inicial,pesos);
	printf(" Final:  \tUSD 1 = $%.2f \tUSD %.2f = $%.2f\n",dolar_final,pesos/dolar_final,pesos);
	
	return 0;
}
