#include<stdio.h>
#include<conio.h>

int main(){
    int i, enteros[10];
    
    for(i=0;i<10;i++){
    	printf("Ingrese valor en la posici%cn %i:\t\t",162,i);
    	scanf("%i",&enteros[i]);
    	printf("\n");
	}
	for(i=0;i<10;i++) printf("\nValor en la posioci%cn %i del vector:\t%i\n",162,i,enteros[i]);
	
	getch();
	return 0;
}
