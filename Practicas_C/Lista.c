#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main (){
	int rta=0,i=0;
	char nom[31],lista[201];
	strcpy(lista,"");
	
	do{
		printf("||||Base de datos||||\n\n1) Agregue un nombre a la lista\n2) Mostrar lista\n3) Finalizar\n\n>> ");
		scanf("%i",&rta);
		fflush(stdin);
		system("cls");
		
		switch(rta){
			case 1:
				printf("1) Escriba el nombre:\n\n>> ");
				gets(nom);
				fflush(stdin);
				printf("\n");
				system("pause");
				system("cls");
				
				nom[0] = toupper(nom[0]);
				for(i=0;i<=30;i++){
					if(nom[i]==32){
						nom[i+1] = toupper(nom[i+1]);
					}
				}
				strcat(lista,strcat(nom,"\n"));
				break;
			case 2:
				printf("2) Lista de nombres:\n\n");
				printf("%s\n",lista);
				system("pause");
				system("cls");
				break;
			default:
				if (rta==3){
					printf("3) El programa ha finalizado :)\n\n");
				}else {
					printf("Error. ");
				}
				system("pause");
				system("cls");
		}
	}while(rta!=3);
	return 0;
}