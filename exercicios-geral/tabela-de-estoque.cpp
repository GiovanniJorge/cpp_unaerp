/*Tabela de Estoque de Produtos*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int produtos[4][3], produtos_no_armazem[3], produtos_iguais[4]={0, 0, 0, 0};
const char nomes_produtos[4][13]={"Telefones", "Impressoras", "Computadores", "Mouses"};

main()
{
	int i=0;
	srand(time(NULL));
	printf("TOTAL DE CADA PRODUTO SOMANDO OS ARMAZENS:");
	for(i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			produtos[i][j]=rand() % 10;
			produtos_iguais[i]+=produtos[i][j];
		}
	}
	for(i=0;i<4;i++)
	{
		printf("\n%s: %i", nomes_produtos[i], produtos_iguais[i]);
	}
	printf("\n\nTOTAL DE CADA ARMAZEM SOMANDO TODOS OS PRODUTOS:");
	for(int j=0;j<3;j++)
	{
		for(i=0;i<4;i++)
		{
			produtos_no_armazem[j]+=produtos[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		printf("\nArmazem %i: %i", i+1, produtos_no_armazem[i]);
	}
}