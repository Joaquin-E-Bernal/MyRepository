#include <stdio.h>
#include <stdlib.h>
#include<conio.h>   //para usar getch();
#include<string.h> 

int valor (int hs, int tarea);

int main(){
	
	int cod_encargado, tarea_encargado, horas_trabajadas,conta=0,contb=0,contc=0,acumhsa=0,acumhsb=0,acumhsc=0;
	char sector, resp[3]={};
	
	printf("desea registrar una venta (si/no)\n");
	gets(resp);
	fflush(stdin);
	
	while(!strcmp(resp,"si")){
		
		printf("ingrese el codigo del encargado\n");	
		scanf("%d", &cod_encargado);
		fflush(stdin);
		
		printf("ingrese la tarea a realizar \n 1=mantenimiento de edificio\n 2=limpieza de cristales\n 3=mantenimiento de espacios verdes\n");
		scanf("%d", &tarea_encargado);	
		fflush(stdin);
		
		printf("ingrese las horas trabajadas \n");
		scanf("%d", horas_trabajadas);
		fflush(stdin);
		
		printf("ingrese el sector designado\n A || B || C \n ");
		scanf("%c", & sector);
		fflush(stdin);
    }
    
    //pudiste usar un switch en vez de varios if anidados
    if(sector=='A'){
    	acumhsa=acumhsa+horas_trabajadas;
    	conta++; 
		printf("El costo total de horas trabajadas es: %d",acumhsa); 
		printf("la cantidad de horas trabajadas es: %d", conta);
    }
	else
	if (sector=='B'){
	    acumhsb=acumhsb+horas_trabajadas;
	    contb++;
	    printf("El costo total de horas trabajadas es: %d",acumhsb);
	    printf("la cantidad de horas trabajadas es: %d", contb);
    }
	else
	if (sector=='C'){
	    acumhsc=acumhsc+horas_trabajadas;
	    contc++;
		printf("El costo total de horas trabajadas es: %d",acumhsc);
		printf("la cantidad de horas trabajadas es: %d", contc);
	}
                    
    horas_trabajadas=valor(horas_trabajadas,tarea_encargado);      
    
	printf("desea registrar una venta (si/no)\n");
	gets(resp);
	fflush(stdin);
	
	return 0;
}

int valor (int hs, int tarea){
	int valor_hora;
	
	switch(tarea){
		case 1:
			valor_hora=3100*hs;
	        printf("tarea mantenimiento de edificio\n");
	        fflush(stdin);
	        break;
		case 2:
			valor_hora=3500*hs;
	        printf("tarea limpieza de cristales\n");
	        fflush(stdin);
	        break;
		case 3:
			valor_hora=2800*hs;
	        printf("mantenimientos de espacios verdes");
	        fflush(stdin);
	        break;
	    default:
	    	printf("Ingrese una tarea valida");
	}
	
	return valor_hora;
}
