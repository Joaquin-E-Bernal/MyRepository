#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
	int i=0,rta=0;
	char contr1[10]={},contr2[10]={};
	//strcpy(contr1,"12345678 ");
	//strcpy(contr2,"12345678 ");
	
	do{
		printf("1) Crear una contrase%ca\n",164);
		printf("2) Ingresar la contrase%ca\n",164);
		printf("3) Finalizar programa\n\n>> ");
		scanf("%i",&rta);
		fflush(stdin);
		system("cls");
		
		switch(rta){
		case 1:
			printf("1) La contrase%ca debe tener 8 caracteres:\n\n>> ",164);
			for(i=0;i<=7;i++){
				contr1[i]=getch();
				printf("*");
			}
			printf("\nSu contrase%ca: %s\n\n",164,contr1);
			
			system("pause");
			system("cls");
			break;
		case 2:
			printf("2) Ingrese su contrase%ca guardada:\n\n>> ",164);
			for(i=0;i<=7;i++){
				contr2[i]=getch();
				printf("*");
			}
			if(!strcmp(contr1,contr2)){
				printf("\n\nHa ingresado la contrase%ca correctamente\n\n",164);
			} else printf("\n\nIntente nuevamente\n\n");
			
			system("pause");
			system("cls");
			break;
		default:
		if (rta==3){
			printf("3) El programa ha finalizado :)\n\n");
		}
		else{
			printf("Error. ");
		}
		system("pause");
		system("cls");
		}
	}while(rta!=3);
	
	return 0;
}
