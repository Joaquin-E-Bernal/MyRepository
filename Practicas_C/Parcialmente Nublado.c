#define TAM 50
#include<stdio.h>	//fflush(stdin)
#include<stdlib.h>	//system("cls")
#include<conio.h>	//getch()

int menu(void);
void cargarDatos(int numDep,int *numDepVec, int problemas,int *problemasVec, float adeuExp,float *adeuExpVec, float adeuMult,float *adeuMultVec, int *contVecinos);
void operarDatos(int *numDepVec, int *problemasVec, float *adeuExpVec, float *adeuMultVec, int *contVecinos);

int main()
{
	int numDep		= 0;
	int problemas	= 0;
	float adeuExp	= 0;
	float adeuMult	= 0;
	
	int opcion	= menu();
	int contVecinos = 0;
	
	int numDepVec[TAM]		= {};
	int problemasVec[TAM]	= {};
	float adeuExpVec[TAM]	= {};
	float adeuMultVec[TAM]	= {};
	
	while(opcion != 3)
	{
		switch(opcion)
		{
			case 1:
				printf("Ingrese los datos del departamento:\n");
				
				printf("N%cmero del depto >> ",163);
				scanf("%i",&numDep);
				fflush(stdin);
				
				printf("Vecinos problematicos >> ");
				scanf("%i",&problemas);
				fflush(stdin);
				
				printf("Monto de expensas adeudadas >> ");
				scanf("%f",&adeuExp);
				fflush(stdin);
				
				printf("Monto de multas adeudadas >> ");
				scanf("%f",&adeuMult);
				fflush(stdin);
				
				cargarDatos(numDep,numDepVec, problemas, problemasVec, adeuExp,adeuExpVec, adeuMult,adeuMultVec, &contVecinos); //&contVecinos es una variable x eso lleva &, si es un vector no hace falta el &
				printf("\nLos datos se han cargado correctamente\n");
				break;
			case 2:
				printf("Evaluacion de departamentos:\n");
				
				operarDatos(numDepVec, problemasVec, adeuExpVec, adeuMultVec, &contVecinos); //&contVecinos es una variable x eso lleva &, si es un vector no hace falta el &
				printf("\nLos datos se han mostrado correctamente\n");
				break;
			default:
				printf("\nError...\n");
		}
		
		printf("Vecinos totales: %i",contVecinos);
		getch();
		opcion = menu();
	}
	printf("Cerrando el programa...");
	getch();
}

int menu(void){
	fflush(stdin);
	int option;
	
	system("cls");
	printf("---Men%c---\n",163);
	printf("\n1-Ingresar datos");
	printf("\n2-Informar datos");
	printf("\n3-Salir \n\n>> ");
	
	scanf("%d",&option);
	fflush(stdin);
	
	system("cls");
	
	return option;
}

void cargarDatos(int numDep,int *numDepVec, int problemas,int *problemasVec, float adeuExp,float *adeuExpVec, float adeuMult,float *adeuMultVec, int *contVecinos)
{
	*(numDepVec + *contVecinos)		= numDep;
	*(problemasVec + *contVecinos)	= problemas;
	*(adeuExpVec + *contVecinos)	= adeuExp;
	*(adeuMultVec + *contVecinos)	= adeuMult;
	
	*contVecinos = *contVecinos + 1;
}

void operarDatos(int *numDepVec, int *problemasVec, float *adeuExpVec, float *adeuMultVec, int *contVecinos)
{
	int i;
	int maxProblemas = *problemasVec;
	int maxVecino	 = *numDepVec;
	float maxMonto	 = (*adeuExpVec + *adeuMultVec);
	/*
	for(i=0;i<*contVecinos;i++)
	{
		printf("%i", *(numDepVec + i)	);
		printf("%i", *(problemasVec + i)),
		printf("%.2f", *(adeuExpVec + i)	);
		printf("%.2f", *(adeuMultVec + i)	);
		printf("\n");
	}
	*/
	for(i=0;i<(*contVecinos);i++)
	{
		printf("\n%i - - - - - - - - -\n",i+1);
		printf("Numero de depto: %i\n", *(numDepVec + i));
		printf("Monto total adeudado:\n $%.2f \n", ( *(adeuExpVec + i) + *(adeuMultVec + i) ));
		
		if( *(problemasVec + i) > maxProblemas)
		{
			maxProblemas = *(problemasVec + i);
			
			maxVecino 	 = *(numDepVec + i);
			maxMonto	 = ( *(adeuExpVec + i) + *(adeuMultVec + i) );
		}
	}
	
	printf("\n- - - - - - - - - -\n");
	printf("Vecino mas problematico:\n");
	printf("Depto: %i", maxVecino);
	printf("Deuda: $%.2f", maxMonto);
}