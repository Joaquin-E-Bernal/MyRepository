//Grupo 11: Joaquin Bernal, Matias Rodriguez y Facundo Ledesma Herrera.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void dibujar(char cartel[37]);

int main(){
	//Inicializacion de variables
		char respuesta[3]={},contrasenia[10]={},codigo_de_afiliado[6]={};
		int i=0,cant_max=0,zona=0,bungalo_normal=0,bungalo_lago=0,bungalo_VIP=0;
		float alquiler=0,pago=0,vuelto=0,montos_acu=0;
		contrasenia[8]=' ';
		char cartel[37]={"Sea bienvenido al camping Senor Pino"};
		cartel[28]=164;
	{//Ingreso al programa
		do{
			dibujar(cartel);
			printf("\n%c     %cDesea alquilar un bungalo? Si/No      %c(00 Finalizar programa)\n\n>> ",177,168,177);
			gets(respuesta);
			fflush(stdin);
			if(!strcmp(respuesta,"00")){
				printf("\n Ingrese la contrase%ca de corte:\n\n>> ",164);
				for(i=0;i<=7;i++){
					contrasenia[i]=getch();
					printf("*");
				}
				printf("\n   ");
				getch();
				if(!strcmp(contrasenia,"Corte-12 ")){
					strcpy(respuesta,"Si");
				}
				else{
					printf("\n\n Contrase%ca incorrecta.",164);
					getch();
				}
			}
			if(respuesta[0]==115){
				respuesta[0]='S';
			}
			system("cls");
		}while(strcmp(respuesta,"Si"));
	}
	{//Cuerpo
		while(!strcmp(respuesta,"Si")&&strcmp(contrasenia,"Corte-12 ")){
			do{
				do{
					system("cls");
					dibujar(cartel);
					printf("\n%c       Ingrese su c%cdigo de afiliado:       %c\n",177,162,177);
					printf("            (m%cximo 5 caracteres)       \n>> ",160);
					gets(codigo_de_afiliado);
					fflush(stdin);
				}while(strlen(codigo_de_afiliado)!=5);
				printf("\n %cEst%c seguro? Si/No\n\n>> ",168,160);
				gets(respuesta);
				fflush(stdin);
				system("cls");
			}while(strcmp(respuesta,"Si")&&strcmp(respuesta,"si"));
			
			do{
				dibujar(cartel);
				printf("\n%c   %cEn qu%c zona desea alquilar un bungalo?  %c\n\n1) Bungalo normal: $1000.00\n2) Bungalo cerca del lago: $2000.25\n3) Bungalo VIP: $6000.99\n\n>> ",177,168,130,177);
				scanf("%i",&zona);
				fflush(stdin);
				switch(zona){
					case 1:
						alquiler=1000.00;
						printf("\n %cEst%c seguro? Si/No\n\n>> ",168,160);
						gets(respuesta);
						fflush(stdin);
						if(!(respuesta,"Si")||!strcmp(respuesta,"si")) bungalo_normal++;
						break;
					case 2:
						alquiler=2000.25;
						printf("\n %cEst%c seguro? Si/No\n\n>> ",168,160);
						gets(respuesta);
						fflush(stdin);
						if(!strcmp(respuesta,"Si")||!strcmp(respuesta,"si")) bungalo_lago++;
						break;
					case 3:
						alquiler=6000.99;
						printf("\n %cEst%c seguro? Si/No\n\n>> ",168,160);
						gets(respuesta);
						fflush(stdin);
						if(!strcmp(respuesta,"Si")||!strcmp(respuesta,"si")) bungalo_VIP++;
						break;
					default:
						printf("\nIngrese una zona v%clida.",160);
						strcpy(respuesta,"No");
						getch();
				}
				system("cls");
			}while(strcmp(respuesta,"Si")&&strcmp(respuesta,"si"));
			
			do{
				dibujar(cartel);
				printf("\n%c        Ingrese el monto que pagar%c:        %c\n\n($%.2f)\n>> $",177,160,177,alquiler);
				scanf("%f",&pago);
				fflush(stdin);
				if(pago>=alquiler){
					printf("\nPago aceptado.");
					vuelto=pago-alquiler;
					printf("\nSu vuelto: $%.2f\n   ",vuelto);
					strcpy(respuesta,"Si");
				}
				else{	
					printf("\nPago insuficiente.");
					strcpy(respuesta,"No");
				}
				getch();
				system("cls");
			}while(strcmp(respuesta,"Si")&&strcmp(respuesta,"si"));
			montos_acu+=alquiler;
			system("cls");
			
			do{
				dibujar (cartel);
				printf("\n%c     %cDesea alquilar un bungalo? Si/No      %c(00 Finalizar programa)\n\n>> ",177,168,177);
				gets(respuesta);
				fflush(stdin);
				if(!strcmp(respuesta,"00")){
					printf("\n Ingrese la contrase%ca de corte:\n\n>> ",164);
					for(i=0;i<=7;i++){
						contrasenia[i]=getch();
						printf("*");
					}
					printf("\n   ");
					getch();
					if (!strcmp(contrasenia,"Corte-12 ")){
						strcpy(respuesta,"Si");
					}
					else{
						printf("\n\n Contrase%ca incorrecta.",164);
						getch();
					}
				}
				if(respuesta[0]==115){
					respuesta[0]='S';
				}
				system("cls");
			}while(strcmp(respuesta,"Si"));
		}
	}
	{//Salida Final
		strcpy(cartel,"        El dia ha finalizado        ");
		cartel[12]=161;
		dibujar(cartel);
		printf("\n\n       Cantidad de alquileres por zona:\n\n");
		printf("\t       Zona 1: %i\n",bungalo_normal);
		printf("\t       Zona 2: %i\n",bungalo_lago);
		printf("\t       Zona 3: %i\n\n",bungalo_VIP);
		printf("       Total de alquileres:\t%i\n",bungalo_normal+bungalo_lago+bungalo_VIP);
		printf("       Total facturado:    \t$%.2f\n       ",montos_acu);
		getch();
	}
	return 0;
}

void dibujar(char cartel[37]){
	int i=0,j=0;
	
	printf("%c ",220);
	for(i=0;i<=41;i++){
		printf("%c",95);
	}printf(" %c\n",220);

	printf("%c%c|  %s  |%c%c\n",204,205,cartel,205,185);

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
