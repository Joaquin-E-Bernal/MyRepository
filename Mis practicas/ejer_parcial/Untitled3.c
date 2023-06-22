#include<stdio.h>
#include<conio.h>

main()
{
	int p=0;
	char password[20];

	printf("Contrase%ca:",164);

	do
	{
		p++;
		password[p]=getch();
	
		
	}while(password[p-1]!="\r");

	password[p-1]="\0";
	printf("you entered as: $s",password);
	getch();

}