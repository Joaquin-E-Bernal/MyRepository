#include<stdio.h>
#define indice 10    //declaro una constante, porque las variables globales estan mal vistas

int main(){
	int vec[indice], cont=0,max,min,i;
	
	for(i=0;i<indice;i++){
		printf("Ingrese el n%cmero de la posici%cn %i:\t\t",163,162,i);
		scanf("%i",&vec[i]);
	}
	
	max=vec[0];
	min=vec[0];
	for(i=0;i<indice;i++){
		if(vec[i]%2==0) cont++;
		
		if(vec[i]>max) max=vec[i];
		if(vec[i]<min) min=vec[i];
	}
	getch();
	system("cls");
	
	printf("la cantidad de n%cmeros par es:\t\t%i\n",163,cont);
	printf("El valor m%cximo del vector es:\t\t%i\n",160,max);
	printf("El valor m%cnimo del vector es:\t\t%i\n    ",161,min);
	getch();
}
