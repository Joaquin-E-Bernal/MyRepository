#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

#define margen_Y 20    //filas i
#define margen_X 60    //columnas j

void margen();

int main(){
	unsigned int x;
	margen();
	getch();
	
	scanf("%i",x);
	fflush(stdin);
	
	exit(x);
	return 0;
}

void margen(){
	int matriz[margen_Y][margen_X];
	int i,j;
	
	//asignaciones a la matriz, excluyendo la primera y ultima columna, y la primera y ultima fila
	for(i=1;i<margen_Y-1;i++) for(j=1;j<margen_X-1;j++) matriz[i][j]=32;
	
	//asigno a la primera y ultima columna
	for(j=0;j<margen_X;j++){
		matriz[0][j]=177;
		matriz[margen_Y-1][j]=177;
	}
	//asigno a la primera y ultima fila
	for(i=0;i<margen_Y;i++){
		matriz[i][0]=177;
		matriz[i][margen_X-1]=177;
	}
	
	for(i=0;i<margen_Y;i++){
		for(j=0;j<margen_X;j++) printf("%c",matriz[i][j]);
		printf("\n");
	}
}