//	JOAQUIN EZEQUIEL BERNAL 44505750
#include<stdio.h>
#include<stdlib.h>

#define VECTORES 50	//Definir los vecotores de 50 elementos.

void menu();
void RegExVel(int numPat, int vel);
float CalcMultas(int numPat, int vel);

int main(){
	menu();
	
	return 0;
}

void menu(){
	int opciones;
	int numPatente=0, velocidad=0;	//case 1
	int salir=0;
	float multa=0;					//case 2
	
	printf("Indique la operacion que desea realizar:\n\n\t1_Registrar excesos de velocidad.\n\t2_Calcular multas.\n\t3_Salir.\n\n\t");
	scanf("%d",&opciones);
	fflush(stdin);
	
	do{
		switch(opciones){
			case 1:
				system("cls");
				printf("Ingreso de los datos del vehiculo infractor\n\n");
				
				
				printf("\tIngrese solamente los numeros de la patente: ");
				scanf("%d",&numPatente);
				fflush(stdin);
				
				printf("\tIngrese la velocidad a la que iba el vehiculo infractor: ");
				scanf("%d",&velocidad);			
				fflush(stdin);
			
				RegExVel(numPatente,velocidad);
				
				system("pause");
				system("cls");
				printf("Desea finalizar el ingreso de datos? 1(Si) - 0(No)");
				scanf("%d",&salir);
				fflush(stdin);
				break;
			case 2:
				system("cls");
				printf("Calculo de la multa a pagar:\n\n");
				
				if(numPatente==0) printf("No se han ingresado todos los datos del vehiculo infractor(Opcion 1)\n\n");
				else{
					if(velocidad==0){
					printf("No se han ingresado todos los datos del vehiculo infractor(Opcion 1)\n\n");
					}
					else{
						multa=CalcMultas(numPatente, velocidad);
						printf("\tLa multa es de: $%f\n",&multa);
					}
				}
				
				system("pause");
				system("cls");
				printf("Desea finalizar el ingreso de datos? 1(Si) - 0(No)");
				scanf("%d",&salir);
				fflush(stdin);
				break;
			case 3:				
				salir=1;
				break;
			default:
				printf("opcion no valida");
		}
	}
	while(salir==0);
}

void RegExVel(int numPat, int vel){
	
	static int v=0;
	int *punteroPR, *punteroVR;
	static int patentesRegs[VECTORES], velocidadesRegs[VECTORES];
	//	printf("%d\n%d\n",punteroPR, punteroVR);

	patentesRegs[v]=numPat;
	velocidadesRegs[v]=vel;
		
	punteroPR+v;						// paso a la siguiente direccion de memoria en la que se encuentra la vaiable.
	*punteroPR=patentesRegs[v];			// modifico el contenido de la variable
	
	punteroVR+v;
	*punteroVR=velocidadesRegs[v];
	
	v++;
	//	printf("%d\n%d\n",punteroPR, punteroVR); para verificar si efectivamente funciona
}

float CalcMultas(int numPat, int vel){
	/*patentesRegs[m];
	velocidadesRegs[m];*/
	int m=0,multa=0;
	for(m=1;m<=VECTORES;m++)
	{	
		if(vel<=65){
			multa=2000;
		}else{
			if(vel>65 && vel<=70) 
			{
				multa=3000;	
			}else{
				if(vel>70) multa=5000;
			}
		}
	}
	return multa;
}
