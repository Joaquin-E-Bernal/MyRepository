//Cronometrado: 1 hora, 27 min, 29 seg.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 25

int menu(void);
int validar_turno(int, int []);
void cargar_turno(int, int, int [], int, int [], int, int[]);
//void mostrar_turnos(int, int [], int [], int []);
void mostrar_turnos(int clientes_totales, int *dni, int *especialidad, int *monto);

int main(void){
	system("cls");
	int clientes=0, opcion=0;
	
	//Ingreso
	int dni=0, codigo=0;
	char cobertura=' ';
	
	//Precio de la consulta
	float precio=0;
	
	//Validacion de turnos
	int turnos_x_especialidad[TAM]={5,5,5,5};    //Inicia en 5 turnos x 4 especialidades
	
	//Cargar datos
	int turno_dni[TAM]={}, turno_codigo[TAM]={}, turno_precio[TAM]={};
	
	do{
		opcion=menu();
		switch(opcion){
		case 1:
			system("cls");
			printf("Ingrese su N%cMERO DE DNI:\n>> ",233);
			scanf("%i",&dni);
			fflush(stdin);
			printf("Ingrese el C%cDIGO DE ESPECIALIDAD:\n>> ",224);    //codigos: 1,2,3 o 4
			scanf("%i",&codigo);
			fflush(stdin);
			printf("Ingrese su TIPO DE COBERTURA:\n>> ");
			scanf("%c",&cobertura);
			fflush(stdin);
			switch(cobertura){
			case 'O':
				precio=1000;
				break;
			case 'P':
				precio=5000;
				break;
			}
			if(validar_turno(codigo,turnos_x_especialidad)==0){
				clientes++;
				cargar_turno(clientes-1, dni, turno_dni, codigo, turno_codigo, precio, turno_precio);
			}
			break;
		case 2:
			mostrar_turnos(clientes,turno_dni,turno_codigo,turno_precio);
			break;
		default:
			printf("\033[1;31m");
			printf("\nOpci%cn no v%clida.",162,160);
			getch();
			system("cls");
			printf("\033[0m");
		}
	}while(opcion!=2);
	
	getch();
	return 0;
}

int menu(void){
	int opcion=0;
	
	printf("1- Registrar solicitud de turno\n");
	printf("2- Salir\n\n>> ");
	scanf("%i",&opcion);
	fflush(stdin);
	
	return opcion;
}

int validar_turno(int codigo, int turnos[TAM]){
	// 0 = Hay un turno disponible
	// 1 = No hay disponibilidad
	
	if(turnos[codigo-1]>0){
		turnos[codigo-1]--;
		printf("\033[1;32m");
		printf("\nTurno asignado.");
		getch();
		system("cls");
		printf("\033[0m");
		return 0;
	}
	else{
		printf("\033[1;31m");
		printf("\nTurno no asignado.");
		getch();
		system("cls");
		printf("\033[0m");
		return 1;
	}
}

void cargar_turno(int i, int dni, int turno_dni[TAM], int codigo, int turno_codigo[TAM], int precio, int turno_precio[TAM]){
	turno_dni[i]=dni;
	turno_codigo[i]=codigo;
	turno_precio[i]=precio;
}
/*
void mostrar_turnos(int clientes_totales, int dni[TAM], int especialidad[TAM], int monto[TAM]){
	int i=0;
	
	for(i=0;i<clientes_totales;i++){
		printf("\n\033[9;100m");
		printf("Cliente n%cmero %i:\n",163,i+1);
		printf("DNI:            %i\n",*(dni+i));
		printf("C%cd. esp.:      %i\n",162,*(especialidad+i));
		printf("Monto a pagar:  $%i\n",*(monto+i));
		printf("\033[0m");
	}if(i==0) printf("\033[1;31m\nNo se han asignado turnos :(\033[0m");
}
*/
void mostrar_turnos(int clientes_totales, int *dni, int *especialidad, int *monto){
	int i;
	
	system("cls");
	for(i=0;i<clientes_totales;i++){
		printf("\n\033[9;100m");
		printf("Cliente n%cmero _%i_\n",163,i+1);
		printf("DNI:            %i\n",*(dni+i));
		printf("C%cd. esp:      %i\n",162,especialidad[i]);
		printf("Monto a pagar:  $%i\n",monto[i]);
		printf("\033[0m");
	}if(i==0) printf("\033[1;31m\nNo se han asignado turnos :(\033[0m");
}
