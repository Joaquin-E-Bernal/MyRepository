Algoritmo TP1_Bernal_Rodriguez
	Definir respuesta, contraseña, codigo_de_afiliado Como Caracter
	Definir i, cant_max, zona, bungalo_normal, bungalo_lago, bungalo_VIP Como Entero
	Definir alquiler, pago, vuelto, montos_acu Como Real
	bungalo_normal <- 0
	bungalo_lago <- 0
	bungalo_VIP <- 0
	montos_acu <- 0
	Repetir
		Escribir '-- Sea bienvenido al camping Señor Pino --'
		Escribir '¿Desea alquilar un bungalo? Si/No'
		Leer respuesta
		Si respuesta ='00' Entonces
			Escribir 'Ingrese la contraseña de corte'
			Leer contraseña
			Si contraseña ='Corte-12' Entonces
				respuesta <- 'Si'
			FinSi
		FinSi
		Borrar Pantalla
	Mientras Que ( NO respuesta='Si')
	Mientras (respuesta ='Si' Y  NO contraseña ='Corte-12') Hacer
		Repetir
			Repetir
				Borrar Pantalla
				Escribir 'Ingrese su código de afiliado:'
				Leer codigo_de_afiliado
			Mientras Que ( NO (LONGITUD(codigo_de_afiliado) = 5))
			Escribir '¿Está seguro? Si/No'
			Leer respuesta
			Borrar Pantalla
		Mientras Que ( NO respuesta = 'Si')
		Repetir
			Escribir '¿En qué zona desea alquilar un bungalo? 1, 2 ó 3'
			Leer zona
			Segun zona  Hacer
				1:
					alquiler <- 1000.00
					Escribir 'Alquiler: $' alquiler
					Escribir '¿Está seguro? Si/No'
					Leer respuesta
					Si (respuesta = 'Si')
						bungalo_normal <- bungalo_normal+1
					FinSi
				2:
					alquiler <- 2000.25
					Escribir 'Alquiler: $',alquiler
					Escribir '¿Está seguro? Si/No'
					Leer respuesta
					Si (respuesta = 'Si')
						bungalo_lago <- bungalo_lago+1
					FinSi
				3:
					alquiler <- 6000.99
					Escribir 'Alquiler: $',alquiler
					Escribir '¿Está seguro? Si/No'
					Leer respuesta
					Si (respuesta = 'Si')
						bungalo_VIP <- bungalo_VIP+1
					FinSi
				De Otro Modo:
					Escribir 'Ingrese una zona válida'
					respuesta <- 'No'
					Esperar Tecla
			FinSegun
			Borrar Pantalla
		Mientras Que ( NO respuesta = 'Si')
		Repetir
			Escribir 'Ingrese el monto que pagará'
			Leer pago
			Si pago >= alquiler Entonces
				Escribir 'Pago aceptado'
				vuelto <- pago-alquiler
				Escribir 'Su vuelto: $' vuelto
				respuesta <- 'Si'
			SiNo
				Escribir 'Pago insuficiente'
				respuesta <- 'No'
			FinSi
			Esperar Tecla
			Borrar Pantalla
		Mientras Que (respuesta = 'No')
		montos_acu <- montos_acu+alquiler
		Borrar Pantalla
		Repetir
			Escribir '-- Sea bienvenido al camping Señor Pino --'
			Escribir '¿Desea alquilar un bungalo? Si/No'
			Leer respuesta
			Si respuesta='00' Entonces
				Escribir 'Ingrese la contraseña de corte'
				Leer contraseña
				Si contraseña ='Corte-12' Entonces
					respuesta <- 'Si'
				FinSi
			FinSi
			Borrar Pantalla
		Mientras Que ( NO respuesta = 'Si')
	FinMientras
	Escribir 'Hola empleado del camping :)'
	Escribir 'Cantidad de alquileres por zona:'
	Escribir 'Zona 1: ',bungalo_normal
	Escribir 'Zona 2: ',bungalo_lago
	Escribir 'Zona 3: ',bungalo_VIP
	Escribir 'Total de alquileres: ' bungalo_normal+bungalo_lago+bungalo_VIP
	Escribir 'Total facturado: $',montos_acu
	Esperar Tecla
FinAlgoritmo