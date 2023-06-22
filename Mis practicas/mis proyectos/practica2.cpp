#include<stdio.h>


int x=178;
#define MURO x+1	//variable macro
#define PARED 177	//constante macro


main(){
	
	// 177	179
	int i,j, pared=1,columna=0;
	char muro[i][j];
	
	
	for(i=1;i<=20;i++)
	{
		
		for(j=1;j<=20;j++)
		{
			if(pared=1)		//despues de la pared se dibuja la columna xq hay un if despues de otro.
			{
				muro[i][j] = PARED;
				printf("%c",muro[i][j]);
				pared=0;
				columna=1;
			}
			if(columna=1)
			{
				muro[i][j] = MURO;
				printf("%c",muro[i][j]);
				columna=0;
				pared=1;					
			}		//muro[i][j]=variable
		}		
		printf("\n");		
	}
}