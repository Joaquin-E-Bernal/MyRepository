#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

#include<windows.h>
#include<time.h>
//------------------------//
void menu();
//------------------------//
int main(){
	while(1){	
		menu();
		Sleep(75);
	}
	return 0;
}

void menu(){
	int i;
	char teclado;
	
	if(kbhit()){
		switch(teclado=getch()){
			case 13:
				printf("\n");
				break;
			default:
				printf("%c",teclado);
		}
	}
	else{
		for(i=0;i<3;i++ ){
			printf(".");Sleep(100);
		}
		Sleep(200);
		for(i=0;i<3;i++ ){
			printf("%c %c",8,8);Sleep(100);
		}
	}
}