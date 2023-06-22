#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main (){
	int i, vec[5]={1,3,8,'a','b'}, *ent;
	
	ent=vec;
	
	for(i=0;i<5;i++){ 
		printf("%d ", *ent++); //i=0 muestro ent[0] e incremento la direccion a la que apunta
	}getch();
	
	return 0;
}
