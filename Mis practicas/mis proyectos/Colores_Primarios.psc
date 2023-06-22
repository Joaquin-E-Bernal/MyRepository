Funcion boole <- comparar_elemento_con_una_lista(elemento,lista,posiciones)
	boole = Falso
	Para i<-1 Hasta posiciones Con Paso 1 Hacer
		Si elemento = lista[i] Entonces
			boole <- (elemento = lista[i]);
		Fin Si
	Fin Para
Fin Funcion

Algoritmo Colores_Primarios
	Definir color Como Caracter;
	Dimension primarios[3];
	primarios[1] = "azul";
	primarios[2] = "rojo";
	primarios[3] = "amarillo";
	
	Mostrar "Ingrese un color..."
	Leer color
	Mostrar "El color ", color, " es primario?";
	Mostrar comparar_elemento_con_una_lista(color, primarios, 3);
FinAlgoritmo