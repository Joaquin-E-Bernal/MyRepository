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

#define clientes_diarios 50    //clientes diarios
#define cod 5    //codigo del cliente


	/////////////////////////////////////////////////////////////////////////////
	
int menu(void);

void articulos_vendidos(int *acumulado, char articulo, int unidades);
float monto(int *acumulado);
void monto_max(float *monto1, float monto2, char *cod_maximo, char cliente[cod]);

void resumen(int clientes, int *acumulado, float max, char cod_maximo[cod]);

    /////////////////////////////////////////////////////////////////////////////
    
    
int main(){
	int opcion,cont_cliente=0;
	//int i,j;
	
	//Ingresos en opcion 1
	char cod_cliente[clientes_diarios][cod]={" "};
	char articulo;
	int unidades;
	//Extras en opcion 1
	int ventas_x_cada_art[clientes_diarios][4]={0};    //acumulador x articulo, x cada cliente
	char rta[3];
	char cod_maximo[cod]={" "};
	float max=0;
	
	while((opcion=menu())!=3){
		switch(opcion){
		case 1:
			printf("Ingrese el c%cdigo de cliente:\n\n>> ",162);
			gets(cod_cliente[cont_cliente]);
			fflush(stdin);
			system("cls");
			strcpy(cod_cliente[cont_cliente+1]," ");    //por si se ingresan caracteres de mas
			
			do{
				printf("Cliente %c%c%c\t%s\n\n",175,175,175,cod_cliente[cont_cliente]);
				
				printf("Ingrese el art%cculo:\n",161);
				printf("a) CPU:    \t$60000\n");
				printf("b) Monitor:\t$20000\n");
				printf("c) Teclado:\t$2000 \n");
				printf("d) Mouse:  \t$1000 \n\n>> ");
				scanf("%c",&articulo);
				fflush(stdin);
				
				printf("\nIngrese la cantidad de unidades que desea comprar:\n\n>> ");
				scanf("%i",&unidades);
				fflush(stdin);
				
				articulos_vendidos(&ventas_x_cada_art[cont_cliente][0], articulo, unidades);
				
				printf("\nMonto a pagar: $%.2f\n",monto(&ventas_x_cada_art[cont_cliente][0]));
				
				printf("\nDesea ingresar otra venta del mismo cliente (%s)?\t'si' / No: Cualquier tecla\n\n>> ",cod_cliente[cont_cliente]);
				gets(rta);
				fflush(stdin);
				system("cls");
				
				if(!strcmp(rta,"si")) rta[0]='S';
			}while(!strcmp(rta,"Si"));
			
			monto_max(&max, monto(&ventas_x_cada_art[cont_cliente][0]), cod_maximo, cod_cliente[cont_cliente]);
			cont_cliente++;
			break;
		case 2:
			resumen(cont_cliente, &ventas_x_cada_art[0][0], max, cod_maximo);
			break;
		default:
			printf("Opci%cn no v%clida.",162,160);
			getch();
		}
	}
	return 0;
}

/*
	cargar_resumen(articulo,cant_u,&ventas_art[clientes_cont][0]);
	
	for(j=0;j<clints;j++){
		printf("\nCliente: %s",clientes[j]);
		for(i=0;i<4;i++)
		printf("\nArticulo: %i",ventas_art[j][i]);
	}
	*/
    ////////////////////////////////////////////////////////////
 
    
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

//opcion 1
void articulos_vendidos(int *acumulado, char articulo, int unidades){
	switch(articulo){
	case 'a':
		*(acumulado) += unidades;
		break;
	case 'b':
		*(acumulado+1) += unidades;
		break;
	case 'c':
		*(acumulado+2) += unidades;
		break;
	case 'd':
		*(acumulado+3) += unidades;
		break;
	default:
		printf("\nArt%cculo no v%clido.",161,160);
		getch();
	}
}


float monto(int *acumulado){
	float precio=0;
	
	precio+=(*(acumulado))*60000;
	precio+=(*(acumulado+1))*20000;
	precio+=(*(acumulado+2))*2000;
	precio+=(*(acumulado+3))*1000;
	
	return precio;
}


void monto_max(float *monto1, float monto2, char *cod_maximo, char cliente[cod]){
	if(monto2>*monto1){
		*monto1=monto2;
		strcpy(cod_maximo,cliente);
	}
}

//opcion 2
void resumen(int clientes, int *acumulado, float max, char cod_maximo[cod]){
	int cant_a=0,cant_b=0,cant_c=0,cant_d=0,i;
	float monto_total=0;
	/*
	for(i=0;i<clientes;i++)	cant_a += *acumulado[i][0];
	for(i=0;i<clientes;i++)	cant_b += *acumulado[i][1];
	for(i=0;i<clientes;i++)	cant_c += *acumulado[i][2];
	for(i=0;i<clientes;i++)	cant_d += *acumulado[i][3];
	
	for(i=0;i<clientes;i++)
	for(j=0;j<4;j++)
	cant_a += *(acumulado+i*j);
	*/
	printf("Cantidad vendida de cada art%cculo:\n\n",161);
	printf("CPU:    \t%i\n",cant_a);
	printf("Monitor:\t%i\n",cant_b);
	printf("Teclado:\t%i\n",cant_c);
	printf("Mouse:  \t%i\n\n",cant_d);
	
	printf("Mayor venta:\t$%.2f\nDel cliente %c%c%c\t%s\n\n",max,175,175,175,cod_maximo);
	
	for(i=0;i<clientes;i++) monto_total += monto(&acumulado[i]);
	printf("Monto total:\t$%.2f\n ", monto_total);
	getch();
	system("cls");
}
