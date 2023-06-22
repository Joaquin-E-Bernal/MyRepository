#include<stdio.h>

int contador(int a);

int i;

main(){
	int x;
	x=100;
	
	
	contador(x);
	
	
	
		
	printf("valor de i: %i",i);
	return(0);
	
}

int contador(int a){
	
	a+=200;
	printf("valor de a: %i",a);
	
	i=a;
	
	return a;	
}