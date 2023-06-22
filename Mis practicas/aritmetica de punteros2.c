#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void carga( int *vec);

int main(){
	int vector[5], y;
	
	carga(vector);
	
	printf("\nDespues de llamar a carga\n");
	
	for(y=0;y<5;y++){
		printf("%d",vector[y]);
		printf("\n\n");
	}getch();
	
	return 0;
}

void carga( int *vec){
	int y,numero;
	
	for(y=0;y<5;y++){
		printf("\nIngrese elemento %d del vector:\n",y);
		scanf("%d",&numero);
		fflush(stdin);
		
		*(vec+y)=numero;
	}
}
