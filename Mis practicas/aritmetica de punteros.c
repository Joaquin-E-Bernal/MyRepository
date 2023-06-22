#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void mostrar ( int *ent);

int main (){
	int enteros[5], x;
	
	for(x=0;x<5;x++){
		enteros[x]=x;
	}
	
	mostrar(&enteros[0]);
	
	for(x=0;x<5;x++){
		printf("%d",enteros[x]);
	}
	getch();

	return 0;
}

void mostrar ( int *ent){
	int y, dato;
	
	for(y=0;y<5;y++){
		printf("%d",*(ent+y));
	}
	puts(" "); //hace un salto de linea
	for(y=0;y<5;y++){
		scanf("%d",&dato); //en el &dato se guarda un valor
		fflush(stdin);
		
		*ent=dato;
		ent=ent+1; //cambio ent a la direccion siguiente
	}
}
