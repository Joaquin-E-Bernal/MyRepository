#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	
	char estring[4]= "hola";
	char estring2[5];
	char estring3[5];
	char estring4[9];
	
	
	scanf("%s %s",estring2,estring3);	// sin el &

		
	
	printf("1ro: %s \n2do: %s\n",estring,estring2);
	printf("muestro: %s \n",estring3);
	
	system("pause");
	return(0);
}