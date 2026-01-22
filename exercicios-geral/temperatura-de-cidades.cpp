/*Temperatura de Cidades*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int temperatura[5][7];
float media[5];
const char nomes[5][4] = {"RP", "SP", "BH", "RJ", "SSA"};

main()
{
	srand(time(NULL));
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			temperatura[i][j] = rand() % 70;
			media[i] += temperatura[i][j];
		}
		printf("A media de %s na ultima semana foi: %0.1f\n", nomes[i], media[i]/7);
	}
}