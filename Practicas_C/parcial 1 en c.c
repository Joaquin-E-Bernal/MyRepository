// bug: los contadores aumentan a pesar de que la cantidad a vender es cero.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	printf("\t\t\t| Bolsas para perros, ventas |\n\n");
		
	float monto_cliente = 0, montos_acu = 0, monto_max = 0, monto_min = 0;
	int cant_bolsas = 0, bolsas_3kg = 0, ventas_e = 0, ventas_r = 0, ventas_p = 0, ban_max = 1, ban_min = 1;
	char cod_prod = ' ', cod_max = ' ', continuar = ' ';
	char nom_cliente[10], nombre_min[10];
	//printf("%i %i %i\n",'e', 'r', 'p');	//muestra ascii
	
	do
	{
		printf( "Ingrese el nombre del cliente: ");
		scanf( "%s", &nom_cliente);
		fflush( stdin);
		printf( "C%cdigo de su producto: ", 162);
		scanf( "%c", &cod_prod);
		fflush( stdin);
		printf( "Cantidad de bolsas que desea comprar: ");
		scanf( "%i", &cant_bolsas);
		fflush( stdin);
		
		switch( cod_prod)	//los char tambien tienen un codigo ascii asociado
		{
			case 'e':	//'e'
				printf("\n<case %i verdadero>\n", cod_prod);
				bolsas_3kg = 1900;
				ventas_e ++;
				
				break;
			case 'r':	//'r'
				printf("\n<case %i verdadero>\n", cod_prod);
				bolsas_3kg = 1700;
				ventas_r ++;
				
				break;
			case 'p':	//'p'
				printf("\n<case %i verdadero>\n", cod_prod);
				bolsas_3kg = 1500;
				ventas_p ++;
				
				break;
			default:
				printf( "\nError\n");
		}
		
		monto_cliente = bolsas_3kg * cant_bolsas;
		printf("El cliente %s debe pagar %.2f$", nom_cliente, monto_cliente);
		
		if( ban_max == 1)
		{
			monto_max = monto_cliente;
			cod_max = cod_prod;
			
			ban_max = 0;
		}else
		{
			if( monto_cliente > monto_max)
			{
				monto_max = monto_cliente;
				cod_max = cod_prod;
			}
		}
		
		if( ban_min == 1)
		{
			monto_min = monto_cliente;
			strcpy( nombre_min, nom_cliente);
					
			ban_min = 0;
		}else
		{
			if( monto_cliente < monto_min)
			{
				monto_min = monto_cliente;
				strcpy( nombre_min, nom_cliente);
			}
		}
		
		montos_acu += monto_cliente;
		
		printf( "\n\n%cDesea realizar otra compra? S/N\n", 168);
		scanf( "%c", &continuar);
		fflush( stdin);
		system( "cls");
	}while( continuar != 'N');
	
	printf( "Total vendidos:\nEukanuba: %i bolsas\nRoyal Canin: %i bolsas\nProplan: %i bolsas\n", ventas_e, ventas_r, ventas_p);
	
	if( ban_max != 1)
	{
		printf( "\nMonto m%cximo: %.2f", 160, monto_max);
		printf( "\nCodigo: %c", cod_max);
	}
	if( ban_min != 1)
	{
		printf( "\nMonto m%cnimo: %.2f", 161, monto_min);
		printf( "\nCliente: %s", nombre_min);
	}
	
	printf( "\n\nGancias totales: %.2f$", montos_acu);
	
	printf("\n\n\n\n\n___________________________________________\nDesarrolado por Bernal, Joaqu%cn( COM 2 TM)", 161);
	
	return 0;
}