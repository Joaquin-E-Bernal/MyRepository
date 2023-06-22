/*
VENTA DE INSUMOS DE COMPUTACION

Integrantes Grupo 8:
	Baigorria, Florencia.
	Bernal, Joaquin.
	Fernandez, Violeta.
	Fernandez, Romina.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

#define cad 4

int menu(void);
float compra(char, int, int *, int *, int *, int *);
void monto_max(float *, float, char *, char []);
void mostrar_informe(int, int, int, int, float, char [], float);


int main(){
	int opcion;char rta[cad];
	int cpu_acu=0, moni_acu=0, tec_acu=0, mouse_acu=0;
	
	char cod_cliente[cad],articulo; int cant_u;    //opcion 1
	float monto_final=0,max=0,facturado_total=0; char cliente_max[cad];
	
	while((opcion=menu())!=3){
		
		switch(opcion){
		case 1:    //Ingresar datos
			printf("Ingrese el c%cdigo de cliente:\n\n>> ",162);
			gets(cod_cliente);
			fflush(stdin);
			system("cls");
			
			do{
				printf("Cliente %c%c%c\t%s\n\n",175,175,175,cod_cliente);
				
				printf("Ingrese el art%cculo:\n",161);
				printf("a) CPU:    \t$60000\n");
				printf("b) Monitor:\t$20000\n");
				printf("c) Teclado:\t$2000 \n");
				printf("d) Mouse:  \t$1000 \n\n>> ");
				scanf("%c",&articulo);
				fflush(stdin);
				
				printf("\nIngrese la cantidad de unidades que desea comprar:\n\n>> ");
				scanf("%i",&cant_u);
				fflush(stdin);
				
				printf("\nMonto actual: $%.2f\n",monto_final+=compra(articulo,cant_u,&cpu_acu,&moni_acu,&tec_acu,&mouse_acu));
				
				printf("\nDesea ingresar otra venta del mismo cliente (%s)?\t'si' / No: Cualquier tecla\n\n>> ",cod_cliente);
				gets(rta);
				fflush(stdin);
				system("cls");
				
				if(!strcmp(rta,"si")) rta[0]='S';
			}while(!strcmp(rta,"Si"));
			
			monto_max(&max,monto_final,cliente_max,cod_cliente);
			facturado_total+=monto_final;
			monto_final=0;
			break;
		case 2:    //Resumen de ventas
			mostrar_informe(cpu_acu,moni_acu,tec_acu,mouse_acu,max,cliente_max,facturado_total);
			break;
		default:
			printf("Opci%cn no v%clida.",162,160);
			getch();
		}
		system("cls");
	}    //Finalizar, xq opcion==3
	return 0;
}


int menu(void){
	int opcion;
	
	printf("VENTAS DE INSUMOS DE COMPUTADORA DEL D%cA\n\n",214);
	printf("Seleccione una opci%cn:\n\n",162);
    printf("1- Ingresar datos\n");
    printf("2- Resumen de ventas\n");  
    printf("3- Finalizar\n\n>> ");
    scanf("%i",&opcion);
    fflush(stdin);
    system("cls");
    
    return opcion;
}


float compra(char articulo, int unidades, int *a, int *b, int *c, int *d){
	float precio=0;
	
	switch(articulo){
	case 'a':
		precio=60000*unidades;    //CPU
		*a+=unidades;
		break;
	case 'b':
		precio=20000*unidades;    //Monitor
		*b+=unidades;
		break;
	case 'c':
		precio=2000*unidades;    //Teclado
		*c+=unidades;
		break;
	case 'd':
		precio=1000*unidades;    //Mouse
		*d+=unidades;
		break;
	default:
		printf("\nLa compra no es v%clida.\n",160);
		getch();
		system("cls");
	}
	return precio;
}


void monto_max(float *monto1, float monto2, char *cod_maximo, char cliente[]){
	if(monto2>*monto1){
		*monto1=monto2;
		strcpy(cod_maximo,cliente);
	}
}


void mostrar_informe(int cant_a,int cant_b,int cant_c,int cant_d,float max, char cod_maximo[],float total){
	printf("Cantidad vendida de cada art%cculo:\n\n",161);
	printf("CPU:    \t%i\n",cant_a);
	printf("Monitor:\t%i\n",cant_b);
	printf("Teclado:\t%i\n",cant_c);
	printf("Mouse:  \t%i\n\n",cant_d);
	
	printf("Mayor venta:\t$%.2f\nDel cliente %c%c%c\t%s\n\n",max,175,175,175,cod_maximo);
	
	printf("Monto total:\t$%.2f\n ",total);
	getch();
	system("cls");
}