#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

void dibujar();

int main(){
	char respuesta[3]={}, nombre_usuario[11]={}, dia_nom[8]={}, lista_v[200]={}, lista_s[200]={}, lista_d[200]={};
	int dia=0, viernes=0, sabado=0, domingo=0;
	do{
		printf("Nombre de usuario: ");
		gets(nombre_usuario);
		fflush(stdin);
		dibujar();
		printf("\n%c         %cCu%cl d%ca espera reservar?         %c\n\n1) Viernes\n2) S%cbado\n3) Domingo\n\n>> ",177,168,160,161,177,160);
		scanf("%i",&dia);
		fflush(stdin);
		switch(dia){
			case 1:
				printf("\n %cEst%c seguro? Si/No\n\n>> ",168,160);
				gets(respuesta);
				fflush(stdin);
				if(strcmp(respuesta,"Si")==0 || strcmp(respuesta,"si")==0){
					strcpy(dia_nom,"Viernes");
					viernes++;
					strcat(lista_v,strcat(nombre_usuario,"\n"));
				}
				break;
			case 2:
				printf("\n %cEst%c seguro? Si/No\n\n>> ",168,160);
				gets(respuesta);
				fflush(stdin);
				if(strcmp(respuesta,"Si")==0 || strcmp(respuesta,"si")==0){
					strcpy(dia_nom,"Sabado");
					sabado++;
					strcat(lista_s,strcat(nombre_usuario,"\n"));
				}
				break;
			case 3:
				printf("\n %cEst%c seguro? Si/No\n\n>> ",168,160);
				gets(respuesta);
				fflush(stdin);
				if(strcmp(respuesta,"Si")==0 || strcmp(respuesta,"si")==0){
					strcpy(dia_nom,"Domingo");
					domingo++;
					strcat(lista_d,strcat(nombre_usuario,"\n"));
				}
				break;
			default:
				printf("\nIngrese un d%ca v%clido.",161,160);
				strcpy(respuesta,"No");
				getch();
		}
		system("cls");
	}while(strcmp(respuesta,"Si")!=0 && strcmp(respuesta,"si")!=0);
	
	printf("\nViernes:\n%s\nS%cbado:\n%s\nDomingo:\n%s\n",lista_v,160,lista_s,lista_d);
	return 0;
}

void dibujar(){
	int i=0,j=0;
	
	printf("%c ",220);
	for(i=0;i<=41;i++){
		printf("%c",95);
	}printf(" %c\n",220);

	printf("%c%c|  Sea bienvenido al camping Se%cor Pino  |%c%c\n",204,205,164,205,185);

	printf("%c ",186);
	for(i=0;i<=41;i++){
		printf("%c",238);
	}printf(" %c\n",186);
	for(j=0;j<=2;j++){
		printf("%c ",186);
		for(i=0;i<=41;i++){
			printf("%c",32);
		}printf(" %c\n",186);
	}
	for(i=0;i<=45;i++){
		printf("%c",177);
	}
}