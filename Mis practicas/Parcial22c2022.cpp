#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void mostrar(int max_num, int cant1, int cant2); 
int calcular_km(float valor_km, float km);

main()
{
	int num_viaje=0, max_num=0, destino;
	int ban=1, cant1=0, cant2=0;
	float valor_bajada_bandera, valor_km, cant_km, monto_peajes, monto_viaje, max;
	char rta, rpta_peajes;
	
	printf("Ingrese valor bajada de bandera:\n");
    fflush(stdin);
	scanf("%f",&valor_bajada_bandera);
	
	printf("Ingrese valor km:\n");
    fflush(stdin);
	scanf("%f",&valor_km);

    do
      {
        printf("Ingrese destino:\n");
        fflush(stdin);
	    scanf("%d",&destino);
	    printf("Ingrese cantidad de km recorridos:\n");
	    fflush(stdin);
	    scanf("%f", &cant_km);
	    printf("Pagò peajes S/N?\n");
	    fflush(stdin);
	    scanf("%c",&rpta_peajes);
	    if (rpta_peajes=='S')
	    	{
	    	printf("Ingrese monto peajes:\n");
	    	fflush(stdin);
	    	scanf("%f",&monto_peajes);
	    	}
	    else 	{ monto_peajes=0;	}
	    
		// Cálculo número y monto de viaje
		
		num_viaje=num_viaje+1;
		monto_viaje=valor_bajada_bandera + calcular_km(valor_km, cant_km)+monto_peajes;
		printf("Nùmero de viaje %d destino %d monto del viaje %f\n", num_viaje, destino, monto_viaje);
		
	
		if(ban==1)   // viaje más caro
			{ban=0;
			max_num=num_viaje;
			max=monto_viaje;
			}else
			{if(monto_viaje > max)
			        {max=monto_viaje;
			        max_num=num_viaje;
				    }
			}
								 	   
	    // cantidad de viajes a CABA y al conurbano
	  if (destino==1) cant1++;
	  else cant2++;
		
		printf ("\n");	
		printf("Desea registrar más viajes S/N\n");
		fflush(stdin);
		scanf("%c",&rta);				  			  			  
		  }while(rta=='S');
			
mostrar(max_num, cant1, cant2);	
	
system("pause");				
} // fin del main
// funcion para mostrar resultados de los puntos a y b
void mostrar(int max_num, int cant1, int cant2)
{
  	printf("Numero de viaje de monto m+aximo %d \n",max_num);
   	printf("Cantidad de viajes destino CABA %d\n",cant1);
   	printf("Cantidad de viajes destino Conurbano %d\n",cant2);
}	
// Funciones para calcular km valorizados
int calcular_km(float valor_km, float cant_km)
{
return  valor_km*cant_km;
}






  


