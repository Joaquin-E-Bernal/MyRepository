Algoritmo EntradasFulvo
	entrada <- 0
	
	contNORTE <- 0
	contSUR <- 0
	contORI <- 0
	contOCC <- 0
	
	acuNORTE <- 0
	acuSUR <- 0
	acuORI <- 0
	acuOCC <- 0
	
	Escribir "Tribuna: "
	Leer tribuna
	Mientras tribuna<>"ZZZ" Hacer
		Segun tribuna Hacer
			"NORTE":
				entrada <- 250
				contNORTE <- contNORTE +1
				acuNORTE <- acuNORTE + entrada
				Escribir "Precio: $" entrada
			"SUR":
				entrada <- 250
				contSUR <- contSUR +1
				acuSUR <- acuSUR + entrada
				Escribir "Precio: $" entrada
			"ORIENTE":
				entrada <- 450
				contORI <- contORI +1
				acuORI <- acuORI + entrada
				Escribir "Precio: $" entrada
			"OCCIDENTE":
				entrada <- 640
				contOCC <- contOCC +1
				acuOCC <- acuOCC + entrada
				Escribir "Precio: $" entrada
			De Otro Modo:
				Escribir "No se ha ingresado correctamente una tribuna."
		FinSegun
		
		Escribir "Tribuna: "
		Leer tribuna
		
	FinMientras
	Escribir "Tribuna NORTE: " contNORTE "personas, $" acuNORTE
	Escribir "Tribuna SUR: " contSUR "personas, $" acuSUR
	Escribir "Tribuna ORIENTE: " contORI "personas, $" acuORI
	Escribir "Tribuna OCCIDENTE: " contOCC "personas, $" acuOCC
	Escribir "Personas en total: " contNORTE + contSUR + contORI + contOCC
	Escribir "Recaudado total: $" acuNORTE + acuSUR + acuORI + acuOCC
FinAlgoritmo
