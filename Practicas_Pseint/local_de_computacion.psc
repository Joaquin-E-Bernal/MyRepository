Algoritmo local_de_computacion
	num_vendedor <- 0
	factura <- 0
	acu_facturado_v1 <- 0; acu_facturado_v2 <- 0; acu_facturado_v3 <- 0; acu_facturado_v4 <- 0
	pc_v1 <- 0; pc_v2 <- 0; pc_v3 <- 0; pc_v4 <- 0
	ban_factura_max <- 1; ban_ventas_max <- 1
	acu_ventas_v1 <- 0; acu_ventas_v2 <- 0; acu_ventas_v3 <- 0; acu_ventas_v4 <- 0
	cont_tarjetas <- 0
	equipo <- ''; precio <- 0; cantidad <- 0; factura_max <- 0; ventas_max <- 0; ventas_actuales <- 0; vendedor_max <- 0
	Escribir 'Ingrese el número del vendedor: '
	Leer num_vendedor
	Mientras num_vendedor<>0 Hacer
		Escribir 'Ingrese el equipo vendido: '
		Leer equipo
		Segun equipo  Hacer
			'P':
				precio <- 200
			'T':
				precio <- 10
			'M':
				precio <- 5
			'N':
				precio <- 150
			'I':
				precio <- 60
			De Otro Modo:
				Escribir 'Error'
		FinSegun
		Escribir 'Ingrese la cantidad vendida del producto: '
		Leer cantidad
		factura <- precio*cantidad
		Escribir '¿Paga con tarjeta? S=si N=no '
		Leer tarjeta
		Si tarjeta=='S' Entonces
			cont_tarjetas <- cont_tarjetas+1
		SiNo
			factura <- factura*0.85
		FinSi
		Segun num_vendedor  Hacer
			1:
				Si equipo=='P' Entonces
					pc_v1 <- pc_v1+cantidad
				FinSi
				acu_facturado_v1 <- acu_facturado_v1+factura
				acu_ventas_v1 <- acu_ventas_v1+cantidad
				ventas_actuales <- acu_ventas_v1
				facturaciones_actuales <- acu_facturado_v1
			2:
				Si equipo=='P' Entonces
					pc_v2 <- pc_v2+cantidad
				FinSi
				acu_facturado_v2 <- acu_facturado_v2+factura
				acu_ventas_v2 <- acu_ventas_v2+cantidad
				ventas_actualesz <- acu_ventas_v2
				facturaciones_actuales <- acu_facturado_v2
			3:
				Si equipo=='P' Entonces
					pc_v3 <- pc_v3+cantidad
				FinSi
				acu_facturado_v3 <- acu_facturado_v3+factura
				acu_ventas_v3 <- acu_ventas_v3+cantidad
				ventas_acutales <- acu_ventas_v3
				facturaciones_actuales <- acu_facturado_v3
			4:
				Si equipo=='P' Entonces
					pc_v4 <- pc_v4+cantidad
				FinSi
				acu_facturado_v4 <- acu_facturado_v4+factura
				acu_ventas_v4 <- acu_ventas_v4+cantidad
				ventas_actuales <- acu_ventas_v4
				facturaciones_actuales <- acu_facturado_v4
			De Otro Modo:
				Escribir 'Error'
		FinSegun
		Si ban_factura_max==1 Entonces
			// Bandera de factura máxima
			ban_factura_max <- 0
			factura_max <- factura
		SiNo
			Si factura>factura_max Entonces
				factura_max <- factura
			FinSi
		FinSi
		// Bandera de ventas máximas
		Si ban_ventas_max==1 Entonces
			ban_ventas_max <- 0
			ventas_max <- ventas_actuales
			vendedor_max <- num_vendedor
		SiNo
			Si cantidad>ventas_max Entonces
				ventas_max <- ventas_actuales
				vendedor_max <- num_vendedor
			FinSi
		FinSi
		Escribir 'Número del vendedor: ',num_vendedor
		Escribir 'Importe total: ',facturaciones_actuales
		// Fin o reinicio del bucle
		Escribir 'Ingrese el número del vendedor: '
		Leer num_vendedor
		factura <- 0
	FinMientras
	Escribir 'PC vendidas: V1=',pc_v1,' V2=',pc_v2,' V3=',pc_v3,' V4=',pc_v4
	Escribir 'Factura más cara: $',factura_max
	Escribir 'Vendedor con mayores ventas: ',vendedor_max,', Ventas: ',ventas_max
	Escribir 'Facturación total de la empresa: ',acu_facturado_v1+acu_facturado_v2+acu_facturado_v3+acu_facturado_v4
	Escribir 'Ventas con tajeta: ',cont_tarjetas
FinAlgoritmo