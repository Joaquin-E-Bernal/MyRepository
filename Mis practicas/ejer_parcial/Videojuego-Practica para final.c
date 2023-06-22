//Cronometro: 1hora, 8 min, 29 seg.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define TAM 50

int menu();
void guardar_combate(int ,int, int, char,int *,int *, char *);
void calcular_ganador(int *, int *, char *, int);

int main(){
	system("cls");
	srand(time(NULL));
	
	int opcion,combate=0;
	//Niveles de poder de los monstruos
	int hechicera[TAM]={}, rival[TAM]={};
	int mons_h,mons_r;
	//Batalla
	char victorias[TAM]={};
	char ganador;
	
	while((opcion=menu())!=3){
		switch(opcion){
		case 1:
			/*
			printf("Ingrese el Poder del Monstruo de la HECHICERA\n>> ");
			scanf("%i",&mons_h);
			fflush(stdin);
			printf("Ingrese el Poder del Monstruo del RIVAL\n>> ");
			scanf("%i",&mons_r);
			fflush(stdin);
			*/
			mons_h=10+rand()%91;mons_r=10+rand()%91;
			if(mons_r<=mons_h){
				printf("Ha ganado la HECHICERA\n");
				ganador='h';
			}
			else{
				printf("Ha ganado el RIVAL\n");
				ganador='r';
			}
			guardar_combate(combate, mons_h, mons_r, ganador, hechicera, rival, victorias);
			combate++;
			break;
		case 2:
			calcular_ganador(hechicera,rival,victorias,combate);
			break;
		default:
			printf("\033[1;31m");
			printf("\nOpci%cn no v%clida.",162,160);
			getch();
			system("cls");
			printf("\033[0m");
		}
		getch();
		system("cls");
	}
	
	return 0;
}

int menu(){
	int opcion;
	
	printf("\tBATALLAMONS\n");
	printf("1-Ingresar datos del enfrentamiento\n");
	printf("2-Calcular resultados\n");
	printf("3-Salir\n\n>> ");
	scanf("%i",&opcion);
	fflush(stdin);
	system("cls");
	
	return opcion;
}

void guardar_combate(int combate, int mons_h, int mons_r, char ganador,int *hechicera,int *rival, char *victorias){
	*(hechicera+combate) = mons_h;
	*(rival+combate) = mons_r;
	*(victorias+combate) = ganador;
}

void calcular_ganador(int *hechicera, int *rival, char *victorias, int combates){
	int i, poder_max=0, vic_h=0, vic_r=0;
	float prom=0;
	
	for(i=0;i<combates;i++){
		if(*(victorias+i) == 'h') vic_h++;
		else vic_r++;
	}
	if(vic_r<vic_h){
		printf("Victoria de la HECHICERA\n");
		for(i=0;i<combates;i++) prom+=hechicera[i];
		printf("Promedio de Poder de Monstruos: %.1f\n",prom/combates);
	}
	else{
		printf("Victoria del RIVAL\n");
		for(i=0;i<combates;i++) prom+=rival[i];
		printf("Promedio de Poder de Monstruos: %.1f\n",prom/combates);
	}
	for(;*hechicera;hechicera++) if(poder_max < (*hechicera)) poder_max=(*hechicera);
	for(;*rival;rival++) if(poder_max < (*rival)) poder_max=(*rival);
	printf("Poder maximo general de monstruo: %i",poder_max);
	
}
