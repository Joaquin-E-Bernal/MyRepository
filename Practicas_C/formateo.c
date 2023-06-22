//otra manera de escribir
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main(){
	int i,escribir;
	char c;
	
	printf("Hola mundo");
	
	escribir=1;
	while(escribir==1){
		c=getch();
		if (!( (c>=0 && c<=31) || c<0 )) printf("%c",c);
		else{
			switch(c){
				case 8:
					printf("\b%c\b",255);
					break;
				case 9:
					printf("%c",c);
					break;
				case 13:
					printf("\n");
					break;
				default:    //aca veo los caracteres raros
					printf("\n%i",c);
			}
		}
	}
	
	return 0;
}