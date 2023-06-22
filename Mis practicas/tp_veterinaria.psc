Algoritmo tp_veterinaria
	Definir nom,dni,tel,edad Como Caracter
	Definir menu,elegir,usuarios,felinos,canes,kg Como Entero
	Definir consulta,vacuna,castracion,monto_cliente,total_recaudado Como Real
	// contadores
	usuarios <- 0
	felinos <- 0
	canes <- 0
	Repetir
		// reiniciamos los precios
		consulta <- 0
		vacuna <- 0
		castracion <- 0
		Borrar Pantalla
		usuarios <- usuarios+1
		Escribir 'Bienvenido a la veterinaria Patitas Chiquitas'
		Escribir 'Ingrese los siguientes datos'
		Escribir 'Nombre:'
		Leer nom
		Escribir 'DNI:'
		Leer dni
		Escribir 'Teléfono:'
		Leer tel
		Escribir '¿A qué menú usted desea acceder?'
		Escribir '1_Menú canino    2_Menú felino'
		Leer menu
		Segun menu  Hacer
			1:
				canes <- canes+1
				Escribir 'Usted se encuentra en el menú de canes'
				Escribir '¿Su mascota es hembra o macho? Escriba su respuesta'
				Leer sexo
				Escribir '¿Es cachorro o adulto? Escriba su respuesta'
				Leer edad
				Escribir 'Indique el peso en kg de su mascota:'
				Leer kg
				Escribir '¿Qué opción desea realizar?'
				Escribir '1_Consulta    2_Vacunas    3_Castración'
				Leer menu_canes
				Segun menu_canes  Hacer
					1:
						Si edad='cachorro' Entonces
							consulta <- 1500
						SiNo
							consulta <- 2500
						FinSi
					2:
						Si kg>12 Entonces
							vacuna <- 1400
						SiNo
							Si kg>=8 Y edad='cachorro' Entonces
								vacuna <- 1000
							FinSi
						FinSi
					3:
						Si sexo='hembra' Entonces
							castracion <- 4000
						SiNo
							castracion <- 3000
						FinSi
					De Otro Modo:
						Escribir 'elija una opción válida'
				FinSegun
			2:
				felinos <- felinos+1
				Escribir 'Usted se encuentra en el menú de felinos'
				Escribir '¿Su mascota es hembra o macho? Escriba su respuesta'
				Leer sexo
				Escribir '¿Es minino o adulto? Escriba su respuesta'
				Leer edad
				Escribir 'Indique el peso en kg de su mascota:'
				Leer kg
				Escribir '¿Qué opción desea realizar?'
				Escribir '1_Consulta    2_Vacunas    3_Castración'
				Leer menu_felinos
				Segun menu_felinos  Hacer
					1:
						Si edad='minino' Entonces
							consulta <- 1500
						SiNo
							consulta <- 2500
						FinSi
					2:
						Si kg>6 Entonces
							vacuna <- 1200
						SiNo
							Si kg>=3 Y edad='minino' Entonces
								vacuna <- 800
							FinSi
						FinSi
					3:
						Si sexo='hembra' Entonces
							castracion <- 4000
						SiNo
							castracion <- 3000
						FinSi
					De Otro Modo:
						Escribir 'elija una opción válida'
				FinSegun
			De Otro Modo:
				Escribir 'elija una opción válida'
		FinSegun
		monto_cliente <- consulta+vacuna+castracion
		Escribir 'Usted debe abonar $',monto_cliente
		total_recaudado <- total_recaudado+monto_cliente
		Escribir '¿Desea ingresar otro cliente?'
		Leer respuesta
	Mientras Que (respuesta='si')
	Escribir 'Cantidad de usuarios ingresados: ',usuarios
	Escribir 'Felinos atendidos: ',felinos
	Escribir 'Canes atendidos: ',canes
	Escribir 'Recaudado total: $',total_recaudado
FinAlgoritmo