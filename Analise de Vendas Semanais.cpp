/*Amálise de Vendas Semanais*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int numero_vendas[7], menor, maior=0, total;

main()
{
	srand(time(NULL));
	for(int i=0;i<7;i++)
	{
		numero_vendas[i]=rand()%100;
		total+=numero_vendas[i];
	}
	menor=numero_vendas[0];
	for(int i=0;i<7;i++)
	{
		if(numero_vendas[i]>maior)
		{
			maior=numero_vendas[i];
		}
		if(numero_vendas[i]<menor)
		{
			menor=numero_vendas[i];
		}
	}
	printf("Dia de maior numero de vendas: %i", maior);
	printf("\nDia de menor numero de vendas: %i", menor);
	printf("\nTotal de vendas durante a semana: %i\n\n", total);
}