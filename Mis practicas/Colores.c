#include<stdio.h>
#include<windows.h>
#include<conio.h>

void colores_1();
void colores_2();

int main(){
	system("cls");
	
	//printf("\033[0;31mHola\033[1;32m mundo\033[0m\n\n");
	//colores_2();
	colores_1();
	getch();
	
	return 0;
}

void colores_1(){    int i,j;
	for(j=0;j<2;j++){
		for(i=0;i<200;i++){
			printf("\033[%i;%im",j,i);
			printf("\nHola mundo[%i;%i]\n",j,i);
		}
		//printf("\033[0m\n\n\n\n");
	}
}

void colores_2(){
	system("color cf");    //hexadecimal c=rojo de fondo, f=blanco texto
	printf("\nHola mundo\n");
}

/*Colores:

Hola mundo[0;7]

//-----------------//

Hola mundo[0;30]

Hola mundo[0;31]

Hola mundo[0;32]

Hola mundo[0;33]

Hola mundo[0;34]

Hola mundo[0;35]

Hola mundo[0;36]

//-----------------//

Hola mundo[0;41]

Hola mundo[0;42]

Hola mundo[0;43]

Hola mundo[0;44]

Hola mundo[0;45]

Hola mundo[0;46]

Hola mundo[0;47]

//-----------------//

Hola mundo[0;90]

Hola mundo[0;91]

Hola mundo[0;92]

Hola mundo[0;93]

Hola mundo[0;94]

Hola mundo[0;95]

Hola mundo[0;96]

//-----------------//

Hola mundo[0;100]

Hola mundo[0;101]

Hola mundo[0;102]

Hola mundo[0;103]

Hola mundo[0;104]

Hola mundo[0;105]

Hola mundo[0;106]

Hola mundo[0;107]

//-----------------//

Hola mundo[1;22]

//-----------------//

Hola mundo[1;30]

Hola mundo[1;31]

Hola mundo[1;32]

Hola mundo[1;33]

Hola mundo[1;34]

Hola mundo[1;35]

Hola mundo[1;36]

//-----------------//

Hola mundo[1;41]

Hola mundo[1;42]

Hola mundo[1;43]

Hola mundo[1;44]

Hola mundo[1;45]

Hola mundo[1;46]

Hola mundo[1;47]

Hola mundo[1;48]

//-----------------//

Hola mundo[1;90]

Hola mundo[1;91]

Hola mundo[1;92]

Hola mundo[1;93]

Hola mundo[1;94]

Hola mundo[1;95]

Hola mundo[1;96]

//-----------------//

Hola mundo[1;100]

Hola mundo[1;101]

Hola mundo[1;102]

Hola mundo[1;103]

Hola mundo[1;104]

Hola mundo[1;105]

Hola mundo[1;106]

*/