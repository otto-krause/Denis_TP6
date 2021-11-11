#include<stdio.h>
#include<stdlib.h>

int main()
	
{
	int mes, dia;
	printf("introduzca su mes de nacimiento \n");
	scanf("%d",&mes);
	printf("introduzca su fecha de nacimiento (dia) \n");
	scanf("%d",&dia);
	
	switch (mes)
	{
	case 1:
		if (dia<=19)
			puts("Su signo es Capricornio");
		else
			puts("Su signo es Acuario");
		break;
	case 2:
		if (dia<=18)
			puts("Su signo es Acuario");
		else
			puts("Su signo es Piscis");
		break;
	case 3:
		if (dia<=20)
			puts("Su signo es Piscis");
		else
			puts("Su signo es Aries");
		break;
	case 4:
		if (dia<=19)
			puts("Su signo es Aries");
		else
			puts("Su signo es Tauro");
		break;
	case 5:
		if (dia<=21)
			puts("Su signo es Tauro");
		else
			puts("Su signo es Geminis");
		break;
	case 6:
		if (dia<=20)
			puts("Su signo es Geminis");
		else
			puts("Su signo es Cancer");
		break;
	case 7:
		if (dia<=22)
			puts("Su signo es Cancer");
		else
			puts("Su signo es Leo");
		break;
	case 8:
		if (dia<=22)
			puts("Su signo es Leo");
		else
			puts("Su signo es Virgo");
		break;
	case 9:
		if (dia<=22)
			puts("Su signo es Virgo");
		else
			puts("Su signo es Libra");
		break;
	case 10:
		if (dia<=22)
			puts("Su signo es Libra");
		else
			puts("Su signo es Escorpio");
		break;
	case 11:
		if (dia<=21)
			puts("Su signo es Escorpio");
		else
			puts("Su signo es Sagitario");
		break;
	case 12:
		if (dia<=21)
			puts("Su signo es Sagitario");
		else
			puts("Su signo es Capricornio");
		break;
	default:
		puts:("error");
	}
}
