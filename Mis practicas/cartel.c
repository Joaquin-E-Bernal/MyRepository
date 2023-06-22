#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

//TOTALEMENTE NECESARIO PARA LAS FUNCIONES
#define tamanio 20
#define margen_X 40
#define margen_Y 40

void centrar(char oracion[]);
void cartel(char oracion[]);

int main(){
	system("cls");
	char oracion[tamanio];
	
	printf("Ingrese un mensaje para un letrero:\n\n>> ");
	gets(oracion);
	fflush(stdin);
	system("cls");
	
	//Antes del cartel prevengo los buggs
	if(strlen(oracion)<tamanio && tamanio<margen_X && tamanio<margen_Y) cartel(oracion);
	else printf("string too long\n\tor\ndefine error\n\tor\ninvalid value");
	
	getch();
	return 0;
}

void centrar(char oracion[]){
	int i;
	
	printf("%c%c|",204,205);
	for(i=0;i<margen_X/2-strlen(oracion)/2-3;i++) printf(" ");
	printf("%s",oracion);
	
	//Si la longitud de la oracion es impar
	if(strlen(oracion)%2!=0)
	for(i=0;i<margen_X/2-strlen(oracion)/2-3;i++) printf(" ");
	
	//Si la longitud de la oracion es par
	else
	for(i=0;i<margen_X/2-strlen(oracion)/2-2;i++) printf(" ");
	
	printf("|%c%c\n",205,185);
}

void cartel(char oracion[]){
	int i=0,j=0;
	
	printf("%c ",220);    //borde superior del cartel
	for(j=0;j<=margen_X-4;j++){
		printf("%c",95);
	}
	printf(" %c\n",220);
	
	centrar(oracion);    //mensaje del cartel
	
	printf("%c ",186);
	for(j=0;j<=margen_X-4;j++){    //borde inferior del cartel
		printf("%c",238);
	}
	printf(" %c\n",186);
	
	for(i=0;i<=2;i++){    //columnas debajo del cartel
		printf("%c ",186);
		for(j=0;j<=margen_X-4;j++){
			printf("%c",32);
		}
		printf(" %c\n",186);
	}
	for(j=0;j<=margen_X;j++){    //muro inferior
		printf("%c",177);
	}
}