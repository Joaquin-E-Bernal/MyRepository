#include<stdio.h>
#include<stdlib.h>

int *generar_vector(int *dir_ini, int valor, int posiciones, int visualizar);

int main(){
	int direc;
	
	system("cls");
	fflush(stdin);
	generar_vector(&direc, 10, 5, 1);
	
	printf("Primera posicion:\t%p\n\n",&direc+0);
	printf("Valor:\t%i\n\n",direc);
	
	printf("Segunda posicion:\t%p\n\n",&direc+1);
	generar_vector(&direc+1, 26, 1, 'n');    //lo mismo que: *((&direc)+1) = 36;
	printf("Valor:\t%i\n\n",*((&direc)+1));
	
	printf("Tercera posicion:\t%p\n\n",&direc+2);
	printf("Valor:\t%i\n\n",*((&direc)+2));
	return 0;
}
    /////////////////////////////////////////////////////////
//  Generador de un vector de n posiciones

int *generar_vector(int *dir_ini, int valor, int posiciones, int visualizar){
	*dir_ini=valor;
	
	if(visualizar==1){
		printf("Direccion:\t%p\n",dir_ini);
		printf("\033[1;32m");
		printf("valor:\t%i\n\n",*dir_ini);
		printf("\033[0m");
	}
	
	if(posiciones>1) generar_vector(dir_ini+1, valor+1, posiciones-1, visualizar);
	
	if(visualizar==1) if(posiciones==1) printf("Ultima posicion:\t%p\n\n",dir_ini);
	
	return dir_ini;
}

