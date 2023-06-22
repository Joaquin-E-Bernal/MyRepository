/*
Obtener el equivalente de un numero en numeros romanos.

Numeros romanos:
UNIDADES	I, II, III, IV, V, VI, VII, VIII, IX
DECENAS		X, L
CENTENAS	C, D
MIL			M
multiplico por mil	|	(seria como la coma, pero a partir del mil, me permite tener millones, mil millones, billones etc.)

In first place we need to know how to convert a decimal number into a roman number:
				Bigger numbers come first.
				The smaller number goes to the left of the larger number to do the subtraction.
				Letters can't be written more than three times in a row.
				A line over the digit multiply it by a thousand.
				
				In decimal system: unit, ten and hundred.(1,10, 100) There is no more:
				
					thousand unit + thousan ten + thousand hundred (1*1,000 + 10*1,000 + 100*1,000);
					million unit + million ten + million hundred (1*1,000,000 + 10*1,000,000 + 100*1,000,000);
				
					Example: 12,487,513 = 1(10*Million)+2(1*Million)+4(100*thousand)+8(10*thousand)+7(1*thousand)+5(100*unit)+1(10*unit)+3(1*unit)
				
				In roman system:
					1(100*1,000,000)		I	*	100	*	1,000,000			C	*	(1,000^2)			100-CENTENA	C, D
					2(10*1,000,000)			II	*	10	*	1,000,000			XX	*	(1,000^2)			10-DECENA	X, L
					3(1*1,000,000)			III	*	1	*	1,000,000			III	*	(1,000^2)			1-UNIDAD	I, II, III, IV, V, VI, VII, VIII, IV
					
					9(100*1,000)			IX	*	100	*	1,000				CM	*	1,000
					5(10*1,000)				V	*	10	*	1,000				L	*	1,000
					6(1*1,000)				VI	*	1	*	1,000				VI	*	1,000
					
					7(100*1)				VII	*	100	*	1					DCC	*	1
					8(10*1)					VIII*	10	*	1					LXXX*	1
					4(1*1)					IV	*	1	*	1					IV	*	1
					----------------	=	----------------------------	=	-----------------------
					123,956,784				I-II-III-IX-V-VI-VII-VIII-IV		CXXIII||CMLVI|DCCLXXXIV

-------------------------------------------------------------------------------------------------------------------------------------------------------------

a)
Entrada:		Ingreso de numero(num)
Intermedios:	unit, ten, hundred, thousand.
Salida:			Numero romano(rom)
---------------------------------------------

b)
Procesos:

*	No se toman valores negativos.

*	Bucles: Ingreso del numero. Conversion del mismo.
		
		Ingreso del numero:
			Uso el ciclo de itinerancia do-while. Se pide un numero y evaluamos si es mayor que cero.
			Si es mayor que cero, entonces se ejecuta la funcion de ConversionRom (funcion que va convertir el numero ingresado a romano).
			Then we ask if the user wants to enter another data to repeat the process.
			If it's not, the program will show us on the screen the original number on the top and the equivalent number in roman below.
		
		Number convertion(ConversionRom):
			
			if(num>100)
			{
				contadorDeComas++;
			}
			
			hundred = num/100
			ten = num/10
			unit = num
			
			Using switch structure for the nine cases 1-9(without cero)
			switch(hundred)
				1:	C	2:	CC	3:	CCC	4:	CD	5:	D	6:	DC	7:	DCC	8:	DCCC	9:	CM
			
			switch(ten)
				1:	X	2:	XX	3:	XXX	4:	XL	5:	L	6:	LX	7:	LXX	8:	LXXX	9:	XC
			
			switch(unit)
				1:	I	2:	II	3:	III	4:	IV	5:	V	6:	VI	7:	VII	8:	VIII	9:	IX

-----------------------------------------------------------------------------------------------------------------------

c)
Resultados: Se va a mostrar en una nueva pantalla el numero original y su equivalente en romano. Con salida formateada.
-----------------------------------------------------------------------------------------------------------------------

d)
Condiciones especificas: al ingresar el valor cero(0), finalizar el programa.

*/

#include<stdio.h>
#include<stdlib.h>

void conversionRom(int num);

void main()
{
	int num, cifras;
	char rom[cifras];
	
	do
	{
		scanf("%i", num);
		fflush(stdin);
		
		conversionRom(num);
		
	}while(num!=0);
	
	printf("El numero decimal: %i\nEl numero romano: %s", num, rom);
}

void conversionRom(int num)
{
	scanf("%i", num);
	fflush(stdin);
	system("cls");
}