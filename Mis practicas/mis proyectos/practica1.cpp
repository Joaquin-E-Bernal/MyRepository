#include<stdio.h>

void intercambio(float,float);

main(){

	float a, b;
	
	printf("Ingrese 2 numeros:\n");
	scanf("%f%f",&a,&b);
	fflush(stdin);
	
	printf("SUMA: %f\nRESTA: %f\nMULTIPLICACI%cN: %f\nDIVISI%cN: %f",a+b,a-b,224,a*b,224,a/b);
	
	intercambio(a,b);	
	
}

void intercambio(float a,float b){
	
	a*=b;
	b=a/b;
	a/=b;
	
	printf("\n\nSUMA: %f\nRESTA: %f\nMULTIPLICACI%cN: %f\nDIVISI%cN: %f",a+b,a-b,224,a*b,224,a/b);		
}