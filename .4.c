#include<stdio.h>
#include<stdlib.h>
int main ()
{
	char ch;
	printf("Introduzca un numero del 1-7 \n");
	ch = getchar ();
	switch(ch)
	{
	case '1':
		puts("El dia es Domingo");
		break;
		
	case '2':
		puts("El  dia es Lunes");
		break;
		
	case '3':
		puts("El dia es Martes");
		break;
		
	case '4':
		puts("El dia es Miercoles");
		break;
		
	case '5':
		puts("El dia es Jueves");
		break;
		
	case '6':
		puts("El dia es Viernes");
		break;
		
	case '7':
		puts("El dia es Sabado");
		break;
		
	default:
		puts("Error");	
	}
	system ("pause");
}
