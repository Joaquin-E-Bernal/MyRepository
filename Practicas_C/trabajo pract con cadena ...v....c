#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>    //para usar getch();

int main(){
	int precio_monitor=8.000, precio_cpu=20.000, precio_teclado=2.000, precio_mouse=1.000;
	int uni_monitor=0, uni_cpu=0, uni_teclado=0, uni_mouse=0;
	int cont_monitor=0, cont_cpu=0, cont_teclado=0, cont_mouse=0;
	int acum_monitor=0, acum_cpu=0, acum_teclado=0, acum_mouse=0;
	int cliente, art;
	char respuesta[4];
	
	printf("%cDesea realizar una venta?: (si/no)\n",168);
	gets(respuesta);    //scanf("%s", respuesta);
	fflush(stdin);
	system("cls");    //Borra la pantalla
	
	//comienzo de while
	while(strcmp(respuesta,"si")==0){
		printf("ingrese el n%cmero de cliente\n",163);
		scanf("%i",&cliente);
		fflush(stdin);
		
		printf("\ningrese el art%cculo vendido (1=monitor, 2=cpu, 3=teclado, 4=mouse)\n",161);
		scanf("%i",&art);
		fflush(stdin);
		
	    while(art>=1 && art<=4){    //mientras art sea igual o mayor que 1 Y menor o igual a 4
			switch(art){
				case 1:
					printf("ingrese las unidades vendidas de monitor:\n");
			        scanf("%i",&uni_monitor);
			        fflush(stdin);
			        
		        	cont_monitor++;	   //es lo mismo que: cont_monitor = cont_monitor + 1
			        acum_monitor+=precio_monitor*uni_monitor;    //lo mismo que: acum_monitor = acum_monitor + (precio_monitor*uni_monitor)
			        break;
				case 2:
					printf("ingrese las unidades vendidas de cpu:\n");
			        scanf("%i",&uni_cpu);
			        fflush(stdin);
			        
		            cont_cpu++;
			        acum_cpu+=precio_cpu*uni_cpu;
			        break;
				case 3:
					printf("ingrese las unidades vendidas de teclado:\n");
			        scanf("%i",&uni_teclado);
			        fflush(stdin);
			        
			        cont_teclado++;
			        acum_teclado+=precio_teclado*uni_teclado;
			        if(uni_teclado>5){
			        	printf("el cliente compr%c m%cs de 5 unidades\n\n",160);
					}
			        break;
				case 4: 
					printf("ingrese las unidades vendidas de mouse:\n");
			        scanf("%i",&uni_mouse);
			        fflush(stdin);
			        
			        cont_mouse++;
			        acum_mouse+=precio_mouse*uni_mouse;    //hace muchas veces la misma operacion, podrias guardarlo en una variable
			        break;
			}
			getch();    //es igual a system("pause"); nada que no escribe "Presione cualquier tecla para continuar."
			system("cls");
			art=0;
		}
		printf("%cDesea realizar una venta?: (si/no)\n",168);
	    gets(respuesta);
	    fflush(stdin);
		/*fflush(stdin):
		Se ubica siempre luego de una lectura de datos,
		hay que USARLO SIEMPRE para limpiar el buffer.
		
		Buffer:
		Memoria de almacenamiento temporal de informacion.
		*/
		system("cls");
	}
	printf("el total de clientes que conpraron el articulo teclado fueron %i\n", cont_teclado);
	printf("el total de clientes que compraron el articulo cpu fueron: %i\n", cont_cpu);
	printf("las ventas totales del articulo mouse fueron: %i\n", acum_mouse);
	printf("las ventas totales incluidos todos los articulos fueron: %i\n", acum_monitor+acum_cpu+acum_teclado+acum_mouse);
	getch();
	
	return 0;
}