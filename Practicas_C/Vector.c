#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#define tam 5

int main(){
	int i,j;
	
	char cad[tam]="hola";
	char cadenas[tam][tam];//={"lol","xd","chau","waw"};
	int enteros[tam]={0,1,2,3,4};
	int mat_infinita[][tam]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
	int mat[2][tam]={0,1,2,3,4,5,6,7,8,9};
	
	printf(cad);
	printf("\n");printf("\n");
	
	for(i=0;i<4;i++){
		for(j=0;j<tam;j++) scanf("%c",&cadenas[i][j]);
		printf("\n");
	}
	for(i=0;i<4;i++){
		for(j=0;j<tam;j++) printf("%c",cadenas[i][j]);
		printf("\n");
	}
	
	//printf("\n%i\n",sizeof(cad));
	
	//printf(cad); //se puede omitir el ("%s",cad)
	
	getch();
	return 0;
}