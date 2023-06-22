#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void carga( int *ent);
int main (){
	int enteros[10], x, y, max;
	
	carga(enteros);
	encontrar_max(&max,enteros/*&enteros[0]*/);
	
	printf("\nValor maximo %d\n",max);
	getch();
}

void carga( int *ent){
	int y, numero;
	
	for(y=0;y<10;y++){
		printf("\nIngrese el elemento %d del vector:\n",y);
		scanf("%d",&numero);
		fflush(stdin);
		
		*(ent+y)=numero;
	}
	printf("\n\n");
}

void encontrar_max(int *max, int *ent){
	int y;
	
	*max=*ent;
	for(y=0;y<10;y++) if (*(ent+y)>*max) *max=*(ent+y);
}
