#include<stdio.h>
#include<stdlib.h>

#define PARED 177	//constante macro
#define COLUMNA 179

void Player1(void);
void Enemigo(void);

main()
{

	int i,j;
	char muro[i][j];
	int J1=1;
	int J2=0;	
	
	for(i=1;i<=20;i++)
	{
		muro[i][j] = PARED;
		printf("%c",muro[i][j]);
		
		j++;
		
		muro[i][j] = COLUMNA;
		printf("%c",muro[i][j]);
	}
	printf("\n");
}

void Player1()
{
	int head,body,foot;
	
	if(head=1)
	{
		printf("\n %c ",2);	
		head=0;
		body=1;
	}
	
	if(body=1)printf("\n%c%c%c",47,219,92);
	
	if(foot=1)printf("\n %c",77);
}

void Enemigo()
{	

	printf("\n %c%c ",1,2);
	printf("\n%c%c%c%c",47,219,219,92);
	printf("\n %c%c ",217,192);

}