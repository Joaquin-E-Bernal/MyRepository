#include<stdio.h>
#include<graphics.h>
#include<windows.h>

int main()
{
	void *imagen;
	
	initwindow(600,500,"grafos",300,300);

	imagen=malloc(imagesize(1,1,60,60));
/*
malloc va a almacenar memoria del tamano que indiquen los parentesis.
Uso imagesize para obtener ese tamano que depende de la coordenadas que yo le indique.
*/
	
	readimagefile("arbol1.png",1,1,60,60);
	
	getimage(1,1,60,60,imagen);	//almaceno la imagen en la variable
	putimage(1,60,imagen,0);
	
	getch();
	
	return 0;
}