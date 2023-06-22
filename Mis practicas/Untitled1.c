#include<stdio.h>    //std input ouput
#include<stdlib.h>    //funciones: system("ejemplo")

int main (){
	int num, i;
	
	printf("Ingrese un numero: ");
	scanf("%i",&num);
	
	while(num<=10){
		printf("El numero %d ", num);
		
		num = num + 1;    // num++
		
		printf("se incrementa a: %i\n\n", num);	
	}
	
	do{
		printf("El numero %d ", num);
		
		num = num + 1;    // num++
		
		printf("se incrementa a: %i\n\n", num);	
	}while(num<=10);
	
    for(i=0;i<=10;i++){
		printf("el incremento de i: %i\n\n", i);
	}
    printf("el incremento de i: %i\n\n", i);
    
	printf("\n");
	system("pause");
	
	return 0;
}