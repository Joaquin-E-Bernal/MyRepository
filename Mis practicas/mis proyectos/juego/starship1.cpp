#include<stdio.h>		// standart input-ouput
#include<windows.h>
#include<conio.h>

/*
defino palabras con un valor en especifico
#define ARRIBA	72
#define IZQUIERDA	75
#define DERECHA	77
#define ABAJO	80
*/

void gotoxy(int x, int y);
void ocultarCursor();

int main()
{
	char tecla;
	int x = 60,y = 20;
	bool gameOver = false;
	
	ocultarCursor();
	while(!gameOver)
	{	
				
		if(kbhit()/*tecla presionada*/)
		{
			
			gotoxy(x,y); printf(" ");
			// movimiento
			tecla = getch();
			if(tecla == 75)//cuando se compara una variable char con un numero entero, estos numeros seran interpretados como numeros ASCII
			{
				
				x--;
				
			}
			if(tecla == 77)
			{
				
				x++;
				
			}
			if(tecla == 72)
			{
				
				y--;
				
			}
			if(tecla == 80)
			{
				
				y++;
				
			}
			gotoxy(x,y); printf("*");		
		}
		Sleep(30);
	}
	
	return 0;
	
}

void gotoxy(int x, int y){
	HANDLE idenCon;// identificador de la consola
	idenCon = GetStdHandle(STD_OUTPUT_HANDLE/*ESPECIFICO EL TIPO DE CONTROL QUE DESEO TENER DE ESTA CONSOLA*/);		
	COORD dwPos;//estructura de datos
	dwPos.X = x;
	dwPos.Y = y;	
	
	SetConsoleCursorPosition(idenCon, dwPos/* X y Y */);
}

void ocultarCursor(){
	
	HANDLE idenCon;
	idenCon = GetStdHandle(STD_OUTPUT_HANDLE);
	
	CONSOLE_CURSOR_INFO cursorApariencia; //creo un objeto, que utiliza esta estructura de datos
	cursorApariencia.dwSize = 2;//variable int que toma valores desde 1 hasta 100
	cursorApariencia.bVisible = FALSE;
	
	SetConsoleCursorInfo(idenCon, &cursorApariencia);//puede cambiar las caracteristicas del cursor	// uso el &(ampersand) para que pueda acceder a sus datos(por referencia)
	
}