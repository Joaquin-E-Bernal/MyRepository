#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main(){
	int playing=1;
	
	while(playing==1){
		Sleep(75);
		/*if(kbhit()){
			printf("Hola\n");
		}*/
		
		if(kbhit())  printf("%c",getch());
	}
	
	return 0;
}