#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Ej cajeras
void carga (float vec[]);  // cargar los datos de ventas de cada cajera

//void calcularpremio( int vec1, int vec2, int i);

int calcularpremio( float vec1[], float vec2[]);  // Devuelve un valor

void calcularmenorvta (float vec[]);

int main(){
    float vecc1[7]={0}, vecc2[7]={0};
    int cajera;


    printf("Carga cajera 1");
    carga(vecc1);   // el argumento es vecc1
    printf("Carga cajera 2");
    carga(vecc2);   // el argumento es vecc2


    cajera=calcularpremio(vecc1, vecc2);    // Devuelve un valor y lo guardo en la variable cajera

    printf("Cajera que recibira premio %d\n", cajera);

    printf("Dia de menor venta cajera 1:\n");
    calcularmenorvta(vecc1);    // Mostrar la posicion del minimo de cajera 1

    printf("Dia de menor venta cajera 2:\n");
    calcularmenorvta(vecc2);    // Mostrar la posicion del minimo de cajera 2

    system("pause");
    
    return 0;
}

void carga (float vec[]){
	int x;
	
    for(x=0;x<7;x++){
    printf("Ingrese monto recaudado del dia %d del vector\n", x+1);
	    //scanf("%d", &vec[x]);
	    scanf("%f", vec+x);
	}   // es lo mismo scanf("%d", vec); vec++;
}

int calcularpremio(float vec1[], float vec2[]){  // el resultado es int
	float cant1=0, cant2=0;
    int  j;

	for(j=0;j<7;j++){
		cant1=cant1+vec1[j];
	}  // ventas de cajera 1 totales
    for(j=0;j<7;j++){
		cant2=cant2+*(vec2+j);
	}  // ventas de cajera 2 totales
	
    if(cant1>cant2){
		return 1;
	}
	else{
		return 2;
	}  // siempre un return
}

void calcularmenorvta(float vec[]){
    int i, posmin;
    float minimo;

    for(i=0;i<7;i++){
        if (i==0){
		minimo=*(vec+i);
		posmin=1;
		}  // el primero es el minimo
		if (*(vec+i)<minimo){
			minimo=*(vec+i);
			posmin=i+1;
		}
    } 

    printf("El dia de venta minima es: %d\n", posmin);
}