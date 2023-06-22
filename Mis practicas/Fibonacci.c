//Sucesion de Fibonacci: 0,1,1,2,3,5,8,13,21,34,55...

#include<stdio.h>
#include<conio.h>

int main(){
	int i,num_aa=0,num_a=1,num=1;
	
	printf("%i\n",num_aa);
	printf("%i\n",num_a);
	for(i=0;i<45;i++){    //si i es mayor que 45, num comienza a tener valores negativos
		printf("%i\n",num);
		num=num_aa+num_a;
		num_aa=num_a;
		num_a=num;
	}
	getch();
	
	return 0;
}