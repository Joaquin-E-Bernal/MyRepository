#include <stdio.h>

long int factorial (int n);    // prototipo de funcion

int main(){
	int n;
	
	printf ("n = ");    // leer la cantidad entera
	scanf ("%d",&n);
	printf( "n! = %ld\n",factorial(n));    //calcular y visualizar el factorial
	
	return 0;
}

long int factorial(int n)
{
	//calcular el factorial
	if (n <= 1) return (1);
	else return(n * factorial(n - 1));
}