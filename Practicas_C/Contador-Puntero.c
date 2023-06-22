#include<stdio.h>
#include<conio.h>

void contador( int *cont);

int main(){
	int i=0,cont1=0, cont2=0, cont3=0;
	
	for(i=0;i<=4;i++){
		contador(&cont1);
	}printf("Contador 1: %i\n",cont1);
	for(i=0;i<=9;i++){
		contador(&cont2);
	}printf("Contador 2: %i\n",cont2);
	for(i=0;i<=19;i++){
		contador(&cont3);
	}printf("Contador 3: %i\n",cont3);
	getch();
	
	return 0;
}
void contador( int *cont){
	*cont+=1;
}
