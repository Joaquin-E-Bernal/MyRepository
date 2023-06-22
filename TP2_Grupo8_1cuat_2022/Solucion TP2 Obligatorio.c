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

#define tam 20
#define vec 50

float monto_compra(char, float);
int menu();
void carga(char , float , char * , float *, int);
void resumen (char *, float *, int);

int main(){
	int i=0, vmenu;    // i se usa como desplazamiento
    char tipoUni, vtipoUni[vec]={' '};
    char cliente[tam];  
    float can_art,  monto, vmonto[vec]={0};
    
    while((vmenu=menu())!=3){
		switch(vmenu){
		case 1:
			printf("Ingrese el c%cdigo de cliente:\n\n>> ",162);
			scanf("%s",&cliente);
			fflush(stdin);
			
			printf("\nIngrese el art%cculo:\n",161);
			printf("a) CPU:    \t$60000\n");
			printf("b) Monitor:\t$20000\n");
			printf("c) Teclado:\t$2000 \n");
			printf("d) Mouse:  \t$1000 \n\n>> ");
			scanf("%c",&tipoUni);
			fflush(stdin);
			
			printf("\nIngrese la cantidad de unidades que desea comprar:\n\n>> ");
			scanf("%f",&can_art);
			fflush(stdin);
	
			// calculo del gasto de compra
			monto=monto_compra(tipoUni,can_art);
		   
			printf("\nMonto a pagar $%.2f\n", monto);
		 
		    carga(tipoUni, monto, vtipoUni, vmonto, i);
		    i++;
	    	break;
		case 2:
			resumen(vtipoUni, vmonto, i);
			break;
		}
    	getch();
    	system("cls");
    }
	system("pause");
}
    
void carga(char x, float y, char *vx, float *vy, int j){    //modifico vectores directamente
	*(vx+j)=x;    // Al contenido de donde apunta vx+j asigno el valor de x
	*(vy+j)=y;
} 
 
void resumen(char *vx, float*vy, int i){    // *vx son los tipos de productos , *vy son montos
	int x, bandera=1;
    float acua=0, acub=0, acuc=0,acud=0;
    float min;
   
	for(x=0;x<i; x++){
		switch(*(vx+x)){    //calculo monto ingresado
	    //por tipo de unidad de venta
		case 'a':
			acua=acua+*(vy+x);    //monto es el contenido de donde apunta vy+x
			break;
		case 'b':
			acub=acub+*(vy+x);
		    break;
		case 'c':
			acuc=acuc+*(vy+x);
			break;
		case 'd':
			acud=acud+*(vy+x);
			break;			 			           
		}
		
		if((*vx+x) == 'c'){    //calculo minimo
			if (bandera==1){
				bandera=0;
				min=*(vy+x);
			}
			else if(*(vy+x)<min) min=*(vy+x);
		}
		if ((*vx+x) == 'a'){    //calculo minimo
			if (bandera==1){
				bandera=0;
				min=*(vy+x);
			}
			else if(*(vy+x)<min) min=*(vy+x);
		}
		if((*vx+x) == 'b'){    // calculo minimo
		  	if (bandera==1){
				bandera=0;
				min=*(vy+x);
			}
			else if (*(vy+x)<min) min=*(vy+x);
		}
		if((*vx+x) == 'd'){    // calculo mini
			if (bandera==1){
				bandera=0;
				min=*(vy+x);
			}
			else if(*(vy+x)<min) min=*(vy+x);
		}
	}
	printf("Facturado por cada art%cculo:\n\n",161);
	printf("CPU:    \t$%.2f\n",acua);
	printf("Monitor:\t$%.2f\n",acub);
	printf("Teclado:\t$%.2f\n",acuc);
	printf("Mouse:  \t$%.2f\n\n",acud);
	
    printf("Minimo valor de compra $%.2f\n", min);
    printf("Monto total de la compra $%.2f\n", acua+acub+acuc+acud);
 }
 
float monto_compra( char articulo, float unidades){
	float resul;
	
	switch(articulo){
	case 'a':
		resul=60000*unidades;
		break;
	case 'b':
		resul=20000*unidades;
		break;
	case 'c':
		resul=2000*unidades;
		break;
	case 'd':
		resul=1000*unidades;
		break;
	}
	
	return resul;    
}     

int menu(){
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