#include<stdio.h>
#include<stdlib.h>

int main()
	
{
	int mes, year;
	float year2;
	printf("Introduzca el numero del mes \n");
	scanf("%d",&mes);
	printf("Introduzca el anio \n");
	scanf("%d",&year);
	year2=year;
	switch (mes)
	{
	case 1:
		puts("Enero tiene 31 dias");
		break;
		
	case 2:
		if (year/4==year2/4)
		{
			printf("Febrero tiene 29 dias");
		}
		else
		{
			printf("Febrero tiene 28 dias");
		}
		break;
		
	case 3:
		puts("Marzo tiene 31 dias");
		break;
		
	case 4:
		puts("Abril tiene 30 dias");
		break;
		
	case 5:
		puts("Mayo tiene 31 dias");
		break;
		
	case 6:
		puts("Junio tiene 30 dias");
		break;
		
	case 7:
		puts("Julio tiene 31 dias");
		break;
		
	case 8:
		puts("Agosto tiene 31 dias");
		break;
		
	case 9:
		puts("Septiembre tiene 30 dias");
		break;
		
	case 10:
		puts("Octubre tiene 31 dias");
		break;
		
	case 11:
		puts("Noviembre tiene 30 dias");
		break;
		
	case 12:
		puts("Diciembre tiene 31 dias");
		break;
		
		
	default:
		puts("error");
	}
}
