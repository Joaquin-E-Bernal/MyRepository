#include<stdio.h>
#include<conio.h>

// "\0" indica el fin de una cadena
int main (){
	int i, mostrar, *punt, vector[10];
	
	punt=vector;
	
	for(i=0;i<9;i++){
		printf("Ingrese un valor(%i):\t\t",i);
		scanf("%i",&vector[i]);
	}
	printf("\nIndique una posici%cn\t\t",162);
	scanf("%i",&mostrar);
	if(mostrar>=0&&mostrar<=i){
		printf("\n\t\t%i",punt[mostrar]);
	}else printf("\n\t\terror");
	printf("\n\t\t");
	getch();
	return 0;
}
