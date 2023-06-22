#include<stdio.h>

main()
{
	printf("Proceso principal");
	sub();
}

void sub(void)
{
	printf("Subproceso");
	main();
}