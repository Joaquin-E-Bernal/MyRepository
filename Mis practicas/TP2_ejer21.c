/*
TP2 21)
    EN UN CAMPEONATO INTER-COLEGIAL SE DESEA CONOCER LA CATEGORiA A LA
QUE CORRESPONDE CADA PARTICIPANTE. SE INGRESA EL NOMBRE Y LA EDAD DE CADA UNO
DE ELLOS.

EL PROGRAMA TERMINA CUANDO EL NOMBRE ES IGUAL A "ZZZ".

1_CATEGORiA INFANTIL, PARA LOS MENORES DE 11 ANIOS.

2_CATEGORiA PUBER, ENTRE LOS 11 Y LOS 14 ANIOS.

3_CATEGORIA JUVENIL, PARA LOS MAYORES DE 14 ANIOS

INFORMAR NOMBRE Y CATEGORIA.
*/
                            
#include<conio.h>    //para usar char,gets
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char nombre[20];
    int infantil, puber, juvenil, edad;

    printf(" Ingrese su nombre:\n%c ",175);
    gets(nombre);
    fflush(stdin);
    
    //printf("%d",!strcmp(nombre,"zzz"));    //Descomentar para ver los valores que retorna la funcion "strcmp"    yo hago lo mismo jajaja
    while(strcmp(nombre,"zzz")!=0){
	    printf("\n Ingrese su edad:\n%c ",175);
	    scanf("%d", &edad);
	    fflush(stdin);
	    /*
	    La manera que lo hiciste vos(3 if):
	    
		if(edad<11){
	        printf("\n Su categoria es infantil\n    ");
	    }else
	    if(edad>=11 && edad<=14){
	        printf("\n Su categoria es puber\n    ");
	    }else
	    if(edad>14){
	        printf("\n Su categoria es juvenil\n    ");
	    }
		*/
		
		//Otra manera, pero con 2 if(No es necesariamente la manera mas optima):
		if(!(edad<=14)){
	        printf("\n Su categoria es juvenil\n    ");
		} else
		if(edad>=11){
		    printf("\n Su categoria es puber\n    ");
		} else printf("\n Su categoria es infantil\n    ");

        getch();    //Espera una tecla, recibe un caracter sin utilizar el buffer, no se necesita el fflush(stdin)
        system("cls");

        printf(" Ingrese su nombre:\n%c ",175);
        gets(nombre);
        fflush(stdin);
        /*
        preguntar por que no me copila bien,solo me muestra el valor ultimo agregado.

        RESPUESTA: creo que es por como usas los fflush(stdin). Siempre usalos despues
        del ingreso del dato ( ya sea un scanf o un gets), usarlo antes no tiene sentido
        ya que no hay buffer que limpiar al comienzo del programa.
        */
    }
    printf("\nEl programa se cerrar%c\nPresione cualquier tecla :)\n    ",160);
    getch();
    return 0;
}
/*
Para mi el programa esta bien desarrollado.

Te recomiendo no utilizar la tecla "Tab" para hacer espacios, es mejor hacer
cuatro espacios con la "barra" porque a veces el espacio que hacen los "Tabs"
pueden variar y desordenar el codigo
*/