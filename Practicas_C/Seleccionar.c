#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

#include<windows.h>
#include<winuser.h>

int main(){
	char mov;
	
	printf(" 1) Seleccionar\n",162);
	printf(" 2) Seleccionar\n",162);
	printf(" 3) Seleccionar\n",162);
	SetCursorPos(1,1);
	mov=getch();
	
	switch((mov)){
		case 1:
			printf("%c",175);
			break;
		case 2:
			printf("%c",175);
			break;
		case 3:
			printf("%c",175);
			break;
		case 4:
			printf("%c",175);
			break;
	}
}
