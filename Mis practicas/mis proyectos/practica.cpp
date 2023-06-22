#include<stdio.h>
#include<string.h>

main(){
	char a[20],b[20],c[20];
	
		
	printf("Escriba su nombre:\n");
	
	scanf("%s %s",a,c);	//toma caracteres hasta que reconoce un "espacio", es decir que lo omite todo desde el espacio hacia adelante.
	fflush(stdin);
	
	
	printf("Escriba su nombre:\n");
	
	gets(b);
	fflush(stdin);

			
	printf("\nSu nombre:\nScanf: %s %s-Longitud(%i)\n",a,c,strlen(a)+strlen(c));
	printf("Concatenado: %s-Longitud(%i)\n",strcat(a,c),strlen(strcat(a,c)));
	printf("Gets: %s-Longitud(%i)\n",b,strlen(b));
	printf("Son iguales: %i",strcmp(a,b));
	
}
