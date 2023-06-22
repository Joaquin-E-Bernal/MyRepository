//Programación Imperativa: Funciones y tipos de datos

//- - - - - - - - - - - - - - - - - - - - - - - -

//Definir la función mitad, que tome un número por parámetro y retorne su mitad.

function mitad(num){
  return num/2;
}

//- - - - - - - - - - - - - - - - - - - - - - - -

/*
Definí las siguientes funciones:
	anterior: toma un número y devuelve ese número menos uno
	triple: devuelve el triple de un número
	anteriorDelTriple: combina las dos funciones anteriores y multiplica a un número por 3 y le resta 1.
*/
function anterior(num){
  return num-1;
}

function triple(num){
  return num*3;
}

function anteriorDelTriple(num){
  return anterior(triple(num));
}

//- - - - - - - - - - - - - - - - - - - - - - - -

/*
Necesitamos una función que diga cuánta plata queda
en tu cuenta (que tiene un cierto saldo) si extráes un cierto monto.

Pero como no queremos quedarnos en negativo, si el monto a extraer
es mayor al saldo, nuestro saldo debe quedar en cero.
*/

function extraer(saldo, monto) {
  return Math.max(saldo-monto,0);
}

//- - - - - - - - - - - - - - - - - - - - - - - -

/*
Se dice que a alguien le gusta leer, cuando la cantidad de libros que recuerda haber leído es mayor a 20...
*/

function leGustaLeer(num){
  return num>20;
}

//- - - - - - - - - - - - - - - - - - - - - - - -

/*
definí las siguientes funciones:
	estaEntre:
		que tome tres números y diga si el primero es
		mayor al segundo y menor al tercero.
	estaFueraDeRango:
		que tome tres números y diga si el primero es
		menor al segundo o mayor al tercero.
*/

function estaEntre(num1,num2,num3){
  return num1>num2 && num1<num3;
}

function estaFueraDeRango(num1,num2,num3){
  return num1<num2 || num1>num3;
}

//- - - - - - - - - - - - - - - - - - - - - - - -

/*
Definí la función "esFinDeSemana" que tome un string que represente el nombre de
un día de la semana, y nos diga si es "sábado" o "domingo".
*/

function esFinDeSemana (dia){
  return "sábado"===dia||dia==="domingo";
}

//- - - - - - - - - - - - - - - - - - - - - - - -

/*
Definí la función longitudNombreCompleto, que tome un nombre y un apellido, y
retorne su longitud total, contando un espacio extra para separar a ambos.
*/

function longitudNombreCompleto(nom,ape){
  return longitud(nom)+longitud(ape)+1;
}

//- - - - - - - - - - - - - - - - - - - - - - - -

/*
Definí la función gritar. Te dejamos para que uses la función convertirEnMayuscula,
que básicamente convierte en mayúsculas un string...
*/

function gritar(string){
  return ("¡"+convertirEnMayuscula(string)+"!");
}

//- - - - - - - - - - - - - - - - - - - - - - - -

/*
Definí la función "maximo", que funcione como Math.max (¡no vale usarla!) y
retorne el máximo entre dos números. Por ejemplo, el máximo entre 4 y 5 es 5,
y el máximo entre 10 y 4, es 10.
*/

function maximo(num1,num2){
  if(num1<num2){
    return num2
  } else{
    return num1
  }
}

//- - - - - - - - - - - - - - - - - - - - - - - -

/*
Definí la función signo, que dado un número nos retorne:
	1, si el número es positivo.
	0, si el número es cero.
	-1, si el número es negativo.
*/

function signo(num){
  if(num>0) return 1;
  if(num===0) return 0;
  return -1;
}

//- - - - - - - - - - - - - - - - - - - - - - - -

/*
Para Ema un número es de la suerte si:
	es positivo, y
	es menor a 100, y
	no es el 15.
Definí la función esNumeroDeLaSuerte que dado un número diga si cumple la
lógica anterior. ¡No vale usar if!
*/

function esNumeroDeLaSuerte(numero){
  return numero>=0 && numero<100 && numero!==15
}

//- - - - - - - - - - - - - - - - - - - - - - - -

/*
El jurado de un torneo nos pidió la función medallaSegunPuesto que retorne la
medalla que le corresponde a los primeros puestos, según la siguiente lógica:
	primer puesto: le corresponde "oro"
	segundo puesto: le corresponde "plata"
	tercer puesto: le corresponde "bronce"
	otros puestos: le corresponde "nada"
*/

function medallaSegunPuesto(puesto){
  if(puesto===1)  return "oro";
  if(puesto===2)  return "plata";
  if(puesto===3)  return "bronce";
  else return "nada";
}
