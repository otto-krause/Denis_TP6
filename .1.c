#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int ch;
	printf("Introduzca una calificacion \n");
	ch = getchar ();
	switch(ch)
	{
	case 'a':
		puts("Excelente");
		break;
		
	case 'b':
		puts("Buena");
		break;
		
	case 'c':
		puts("Regular");
		break;
		
	case 'd':
		puts("Suficiente");
		break;
		
	case 'f':
		puts("No Suficiente");
		break;
		
	default:
		puts("Error");
	}
	system ("pause");
}
