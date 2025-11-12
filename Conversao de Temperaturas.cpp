/*Conversão de Temperaturas*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int celsius[7], fahrenheit[7];

main()
{
	srand(time(NULL));
	printf("TEMPERATURA EM CELSIUS");
	for(int i=0;i<7;i++)
	{
		celsius [i] = rand() % 40;
		printf("\nDia %i: %i", i+1, celsius[i]);
		fahrenheit[i] = (celsius[i]*1.8)+32;
	}
	printf("\n\nTEMPERATURA EM FAHRENHEIT");
	for(int i=0;i<7;i++)
	{
		printf("\nDia %i: %i", i+1, fahrenheit[i]);
	}
}