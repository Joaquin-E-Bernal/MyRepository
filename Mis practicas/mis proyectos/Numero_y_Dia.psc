Funcion dia <- dia_de_la_semana ( num )
	Dimension semana[7];
	semana[1] = "lunes";
	semana[2] = "martes";
	semana[3] = "mi�rcoles";
	semana[4] = "jueves";
	semana[5] = "viernes";
	semana[6] = "s�bado";
	semana[7] = "domingo";
	dia = semana[num];
Fin Funcion


Algoritmo Numero_y_Dia
	Definir dia Como Entero;
	Mostrar "Indique un d�a de la semana:"
	Leer dia;
	Mostrar dia_de_la_semana(dia);
FinAlgoritmo