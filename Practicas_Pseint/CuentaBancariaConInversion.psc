//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 1
SubProceso deposito <- funDepositar (montoCuenta)
	Definir deposito, monto Como Real
	
	Borrar Pantalla
	Escribir "Fondos actuales: $ " montoCuenta
	Escribir "Ingrese más fondos para su cuenta:"
	Escribir Sin Saltar "+$$$ "
	Leer monto
	
	//Verificar datos
	Mientras monto<0 Hacer
		Escribir "Monto no válido"
		
		Borrar Pantalla
		Escribir "Fondos actuales: $ " montoCuenta
		Escribir "Ingrese más fondos para su cuenta:"
		Escribir Sin Saltar "+$$$ "
		Leer monto
	FinMientras
	
	deposito <- montoCuenta+monto
FinSubProceso
//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 2
SubProceso montoFinal <- funInvertir (montoCuenta)
	Definir i, dias Como Entero
	Definir montoAcu, tasaAnual, tasaDiaria Como Real
	
	Borrar Pantalla
	Escribir "Fondos actuales: $ " montoCuenta
	Escribir "Ingrese un monto inicial para la inversión:	(Invertir todo, ingrese: 98789)"
	Leer montoInicial
	
	Si montoInicial==98789 Entonces //Invertir todo
		montoInicial<-montoCuenta
	FinSi
	
	//Verificar datos
	Mientras  montoCuenta<montoInicial o montoInicial<0 Hacer
		Si montoInicial<0 Entonces
			Escribir "Monto no válido"
		SiNo
			Escribir "Saldo insuficiente"
		FinSi
		Esperar Tecla
		
		Borrar Pantalla
		Escribir "Fondos actuales: $ " montoCuenta
		Escribir "Ingrese un monto inicial para la inversión:	(Invertir todo, ingrese: 98789)"
		Leer montoInicial
		
		Si montoInicial==98789 Entonces //Invertir todo
			montoInicial<-montoCuenta
		FinSi
	FinMientras
	
	montoCuenta<-montoCuenta-montoInicial
	Borrar Pantalla
	Escribir "Fondos actuales: $ " montoCuenta
	Escribir "Monto inicial para la inversión: "
	Escribir "$ " montoInicial
	Escribir "¿Durante cuántos días durará la inversión?"
	Leer dias
	Dimension historial[dias]
	Escribir "Indique la tasa anual"
	Leer tasaAnual
	
	Escribir "Plazo fijo a " dias " días: $ " montoInicial+montoInicial*tasaAnual*dias/100/360 " (+$ " montoInicial*tasaAnual*dias/100/360 ")"
	
	//Regla de 3
	//montoInicial: 100%
	//montoFinal: tasaAnual% -> tasaAnual*montoInicial/100
	tasaDiaria<-tasaAnual/12/4/7//la convierto en una tasa diaria
	montoAcu<-montoInicial
	Para i<-1 Hasta dias Hacer
		montoAcu<-montoAcu+tasaDiaria*montoAcu/100
		historial[i]<-montoAcu
	FinPara
	montoFinal<-montoAcu
	
	Escribir "Interés compuesto a " dias " días: $ " montoFinal " (+$ " montoFinal-montoInicial ")"
	
	Escribir "Historial del interés compuesto:"
	sem<-0
	montoAcu<-0
	Para i<-1 Hasta dias Hacer
		sem<-sem+1
		Si i<>1 Entonces
			Escribir "[Día " i ": $ " historial[i] ", (+$ " historial[i]-historial[i-1] ")]"
			
			montoAcu<-montoAcu+historial[i]-historial[i-1] //Ganancia del día
			Si sem==7 o i==dias Entonces
				Escribir "[Semanal: +$ " montoAcu "]"
				montoAcu<-0
				sem<-0
			FinSi
		SiNo
			Escribir "[Día " i ": $ " historial[i] ", (+$ " historial[i]-montoInicial ")]"
			montoAcu<-historial[i]-montoInicial
		FinSi
	FinPara
	Escribir "Ganancia final: +$ " montoFinal-montoInicial
	Esperar Tecla
FinSubProceso
//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 3
SubProceso fondos <- funRetirar (montoCuenta)
	Definir fondos, monto Como Real
	
	Borrar Pantalla
	Escribir "Fondos actuales: $ " montoCuenta
	Escribir "Retire fondos de su cuenta:	(Retirar todo, ingrese: 98789)"
	Escribir Sin Saltar "-$$$ "
	Leer monto
	
	Si monto==98789 Entonces //Retirar todo
		monto<-montoCuenta
	FinSi
	
	//Verificar datos
	Mientras  montoCuenta<monto o monto<0 Hacer
		Si monto<0 Entonces
			Escribir "Monto no válido"
		SiNo
			Escribir "Saldo insuficiente"
		FinSi
		Esperar Tecla
		
		Borrar Pantalla
		Escribir "Fondos actuales: $ " montoCuenta
		Escribir "Retire fondos de su cuenta:	(Retirar todo, ingrese: 98789)"
		Escribir Sin Saltar "-$$$ "
		Leer monto
		
		Si monto==98789 Entonces //Retirar todo
			monto<-montoCuenta
		FinSi
	FinMientras
	
	fondos <- montoCuenta-monto
FinSubProceso
//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 4
Algoritmo CuentaBancariaConInversion
	//Quiero invertir plata en un plan de inversion, hay 2 opciones:
	//A largo plazo con una tasa de interes
	//Interes compuesto
	
	Definir i Como Entero
	Definir fondosUsuario Como Real
	Definir respuesta Como Caracter
	Dimension seleccion[3]
	seleccion[1]='>'		// "> Depositar"
	seleccion[2]=' '		// "  Invertir"
	seleccion[3]=' '		// "  Retirar"
	
	Escribir "¿Qué operación desea realizar? Bajar(S) Subir(W)"
	Escribir seleccion[1] " Depositar"
	Escribir seleccion[2] " Invertir"
	Escribir seleccion[3] " Retirar"
	Leer respuesta
	
	i<-1
	Mientras respuesta<>'X' Hacer
		Segun respuesta Hacer
			Caso 's':
				Si i<>3 Entonces
					seleccion[i]=' '
					i<-i+1
					seleccion[i]='>'
				SiNo
					seleccion[i]=' '
					i<-1
					seleccion[i]='>'
				FinSi
			Caso 'w':
				Si i<>1 Entonces
					seleccion[i]=' '
					i<-i-1
					seleccion[i]='>'
				SiNo
					seleccion[i]=' '
					i<-3
					seleccion[i]='>'
				FinSi
			Caso "ok":
				Segun i Hacer
					Caso 1: fondosUsuario<-funDepositar(fondosUsuario)
					Caso 2: fondosUsuario<-funInvertir(fondosUsuario)
					Caso 3: fondosUsuario<-funRetirar(fondosUsuario)
				FinSegun
		FinSegun
		
		Borrar Pantalla
		Escribir "Fondos: $ " fondosUsuario
		Escribir "¿Qué operación desea realizar? Bajar(S) Subir(W)"
		Escribir seleccion[1] " Depositar"
		Escribir seleccion[2] " Invertir"
		Escribir seleccion[3] " Retirar"
		Leer respuesta
	FinMientras
FinAlgoritmo