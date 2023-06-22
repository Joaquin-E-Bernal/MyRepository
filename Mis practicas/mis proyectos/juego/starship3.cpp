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

class NAVE{
	
	int x,y; //declaro los atributos, a su vez estos son PRIVADOS: no puedo acceder a ellos afuera del bloque
	
public:	//accesible en cualquier punto del programa
	NAVE(int _x, int _y)/* x = _x; y = _y; */: x(_x), y(_y){}//constructor(siempre se le pone el mismo nombre que la clase) y tambien toma parametros
	void pintar();
	void borrar();
	void mover();	
	
};						//CON ;(punto y coma) AL FINAL XQ SINO NO LO TOMA COMO CLASE

void gotoxy(int x, int y);
void ocultarCursor();

int main()
{
	NAVE J1(60,40/*constructor*/);	//creo un objero del tipo NAVE
	// J1.pintar();		puedo acceder a dicho metodo gracias a que este es publico							Nota: el . es para acceder por referencia
	// J1.x++;			no puedo modificar el valor de la variable x del objeto, porque es privada
	
	bool gameOver = false;
	
	ocultarCursor();
	while(!gameOver)
	{
		J1.mover();
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


void NAVE::pintar()	//los :: permiten acceder a los metodos de la clase
{
	gotoxy(x,y); printf("  %c",30);	//imprime codigo ASCII 30 = '?'
	gotoxy(x,y+1/* +1 = 1 mas abajo*/); printf(" %c%c%c",40,207,41);// ASCII = (¤)
	gotoxy(x,y+2); printf("%c%c %c%c",30,190,190,30);// ASCII = ?¥¥?
}

void NAVE::borrar()	//los :: permiten acceder a los metodos de la clase
{
	gotoxy(x,y);	printf("     ");
	gotoxy(x,y+1);	printf("     ");
	gotoxy(x,y+2);	printf("     ");
}

void NAVE::mover()	//los :: permiten acceder a los metodos de la clase
{
	if(kbhit()/*tecla presionada*/)
	{			
		borrar();
		// movimiento
		char tecla = getch();
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
		pintar();		
	}
}
