#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define TAMANIO 20
//puts("texto"); siempre hace un salto de linea al final
//printf("texto"); escribe todo de corrido

void dibujar(char dibujo,int x,int y);

int main(){
	int matriz[TAMANIO][TAMANIO];
	int *punt, i, j, pos_x=10, pos_y=15;
	char set_char='*';
	
	for(i=0;i<TAMANIO;i++){
		for(j=0;j<TAMANIO;j++){
			if(i==j) printf("%c",192);
			else if (j+1==i) printf("%c",217);
			else printf("%c",196);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<TAMANIO;i++){
		for(j=0;j<TAMANIO;j++){
			if(i==(TAMANIO-1-j) && j==(TAMANIO-1-i)) printf("%c",217); //j==19 en la ultima columna xq el for es de 0 hasta TAMANIO-1
			else if (j==i) printf("%c",192);
			else printf("%c",196);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<TAMANIO;i++){
		//printf("%i\n",i);
		for(j=0;j<TAMANIO;j++){
			if(i==(TAMANIO-1-j) && j==(TAMANIO-1-i)) printf("%c",217); //j==19 en la ultima columna xq el for es de 0 hasta 19
			else if(i+j==TAMANIO) printf("%c",192);
			else printf("%c",196);
		}
		printf("\n");
	}
	getch();
	system("cls");
	
	printf("Ingrese un caracter:\n");
	set_char=getchar(); //scanf("%c", &set_char);
	fflush(stdin);
	printf("\nPosici%cn en x:\t",162);
	scanf("%i", &pos_x);
	fflush(stdin);
	printf("\nPosici%cn en y:\t",162);
	scanf("%i", &pos_y);
	fflush(stdin);
	
	printf("\n");
	dibujar(set_char,pos_x,pos_y);
	getch();
	
	return 0;
}

void dibujar(char dibujo,int x,int y){
	int i, j, dibujon_t=178;
	
	for(i=1;i<=TAMANIO;i++){
		for(j=1;j<=TAMANIO;j++){
			if(i==y && j==x) printf("%c",dibujo);
			else printf("%c",dibujon_t);
		}printf("\n");
	}
}