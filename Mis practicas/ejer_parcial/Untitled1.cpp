#include<stdio.h>

int contador(int a);

main(){

	int i;
	
	
	i=0;	
	printf("El valor de i es: %i \n",i);
	
	i= contador(i);
		
	printf("Ahora el valor de i luego de la funcion contador: %i",i);
	
	
	return(0);
	
}

int contador(int a){
	
	a=0;
	
	for(int x=1; x<= 10; x++){
		
	printf("El valor de a es: %i \n",a);
	a++;
	
	}
	return a;	
}