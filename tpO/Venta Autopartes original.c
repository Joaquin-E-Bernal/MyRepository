#include<stdio.h>
#include<stdlib.h>
#include<string.h>





int main(){
int vehiculo,cfm=0,cfrem=0,cem=0,cfa=0,cfrea=0,cea=0,cfc=0,cfrec=0,cec=0,cedom=0,cft=0,cfret=0,cet=0,finalizar;
float precio,totalcobrar,valortotal;
char nombre[20],dni[9],codigo[5],agregar[3],domicilio[3];

do{
	printf("\t BIENVENIDO\n\n\n");
	printf ("Ingrese nombre y apellido: ");
	fflush(stdin);
	gets(&nombre);
	printf("\nIngrese DNI(sin espacios): ");
	fflush(stdin);
	scanf("%s",&dni);
	do{
		printf("\nIngrese tipo de veh%cculo (Moto= 1,Auto= 2,Cami%cn= 3): ",161,162);
		fflush(stdin);
		scanf("%d",&vehiculo);
		switch(vehiculo){
			case 1:
				printf("\nIngrese c%cdigo del producto: ",162);
				fflush(stdin);
				scanf("%s",&codigo);
				if(strcmp(codigo,"0001")==0){
					precio=1000;
					system("cls");
					printf("\nNombre y Apellido: %s\n",nombre);
					printf("\nDNI: %s\n",dni);
					printf("\nTipo de veh%cculo: Moto \n",161);
					printf("\nAutoparte: Filtros\n ");
					printf("\nPrecio: %.2f\n",precio);
					cfm++;
				}
				else{
					if(strcmp(codigo,"0002")==0){
						precio=1500;
						system("cls");
						printf("\nNombre y Apellido: %s\n",nombre);
				    	printf("\nDNI: %s\n",dni);
				    	printf("\nTipo de veh%cculo: Moto\n ",161);
				    	printf("\nAutoparte: Frenos \n");
				    	printf("\nPrecio: %.2f\n",precio);
				    	cfrem++;
					}
					else{
						if(strcmp(codigo,"0003")==0){
							precio=1700;
							system("cls");
							printf("\nNombre y Apellido: %s\n",nombre);
			    	    	printf("\nDNI: %s\n",dni);
		        			printf("\nTipo de veh%cculo: Moto\n ",161);
					        printf("\nAutoparte: Escapes\n");
			        		printf("\nPrecio: %.2f\n",precio);
			        		cem++;
						}
					}
				}
				break;
			case 2:
				printf("\nIngrese c%cdigo del producto: ",162);
				scanf("%s",&codigo);
				if(strcmp(codigo,"0004")==0){
					precio=1250.30;
					system("cls");
					printf("\nNombre y Apellido: %s\n",nombre);
					printf("\nDNI: %s\n",dni);
					printf("\nTipo de veh%cculo: Auto \n",161);
					printf("\nAutoparte: Filtros\n ");
					printf("\nPrecio: %.2f\n",precio);
					cfa++;
				}
				else{
					if(strcmp(codigo,"0005")==0){
						precio=1300;
						system("cls");
						printf("\nNombre y Apellido: %s\n",nombre);
				    	printf("\nDNI: %s\n",dni);
				    	printf("\nTipo de veh%cculo: Auto\n ",161);
				    	printf("\nAutoparte: Frenos\n ");
				    	printf("\nPrecio: %.2f\n",precio);
				    	cfrea++;
					}
					else{
						if(strcmp(codigo,"0006")==0){
							precio=1850.50;
							system("cls");
							printf("\nNombre y Apellido: %s\n",nombre);
			    	    	printf("\nDNI: %s\n",dni);
		        			printf("\nTipo de veh%cculo: Auto\n ",161);
					        printf("\nAutoparte: Escapes\n");
			        		printf("\nPrecio: %.2f\n",precio);
			        		cea++;
						}
					}
				}
				break;
			case 3:
				printf("\nIngrese c%cdigo del producto: ",162);
				scanf("%s",&codigo);
				if(strcmp(codigo,"0007")==0){
					precio=1500;
					system("cls");
					printf("\nNombre y Apellido: %s\n",nombre);
					printf("\nDNI: %s\n",dni);
					printf("\n\nTipo de veh%cculo: Camni%cn \n",161,162);
					printf("Autoparte: Filtros \n");
					printf("\nPrecio: %.2f\n",precio);
					cfc++;
				}
				else{
					if(strcmp(codigo,"0008")==0){
						precio=1800.90;
						system("cls");
						printf("\nNombre y Apellido: %s\n",nombre);
				    	printf("\nDNI: %s\n",dni);
				    	printf("\nTipo de veh%cculo: Cami%cn \n",161,162);
				    	printf("\nAutoparte: Frenos \n");
				    	printf("\nPrecio: %.2f\n",precio);
				    	cfrec++;
					}
					else{
						if(strcmp(codigo,"0009")==0){
							precio=2000;
							system("cls");
							printf("\nNombre y Apellido: %s\n",nombre);
			    	    	printf("\nDNI: %s\n",dni);
		        			printf("\nTipo de veh%cculo: Cami%cn\n ",161,162);
					        printf("\nAutoparte: Escapes\n");
			        		printf("\nPrecio: %.2f\n",precio);
			        		cec++;
						}
					}
				}
				break;
			default:
				printf("ERROR\n");
		}
		valortotal= valortotal + precio;
		system("pause");
		system("cls");
		printf ("\n%cDesea seguir agregando productos%c (si/no) \n",168,63);
		fflush(stdin);
		scanf("%s", &agregar);
		
	}while(strcmp(agregar,"si")==0);
	
	system("cls");
	printf("%cDesea entrega a domicilio%c (si/no) \n",168,63);
	scanf("%s",&domicilio);
	
	if(strcmp(domicilio,"si")==0){
		totalcobrar = valortotal + 300;
		
		printf("\nTotal a cobrar: %.2f \n",totalcobrar);
		cedom++;
	}
	else{
		totalcobrar = valortotal;
		
		printf("\nTotal a cobrar: %.2f \n",totalcobrar);
	}	

	printf("\nPara finalizar presione 0(cero)\n");
	scanf("%d",&finalizar);
}while(finalizar!=0);

cft=cfm+cfa+cfc;
cfret=cfrem+cfrea+cfrec;
cet=cem+cea+cec;

system("cls");
printf("\tINFORME FINAL\n\n\n");
printf("Cantidad total de Filtros vendidos: %d \n",cft);
printf("Cantidad total de Frenos vendidos: %d \n",cfret);
printf("Cantidad total de Escapes vendidos: %d \n\n\n",cet);
printf("Cantidad total de Filtros de Moto vendidos: %d \n",cfm);
printf("Cantidad total de Frenos de Moto vendidos: %d \n",cfrem);
printf("Cantidad total de Escapes de Moto vendidos: %d \n",cem);
printf("Cantidad total de Filtros de Auto vendidos: %d \n",cfa);
printf("Cantidad total de Frenos de Auto vendidos: %d \n",cfrea);
printf("Cantidad total de Escapes de Auto vendidos: %d \n",cea);
printf("Cantidad total de Filtros de Cami%cn vendidos: %d \n",162,cfc);	
printf("Cantidad total de Frenos de Cami%cn vendidos: %d \n",162,cfrec);
printf("Cantidad total de Escapes de Cami%cn vendidos: %d \n",162,cfc);
printf("Cantidad total de entregas a domicilio: %d \n",cedom);
	return 0;
}

