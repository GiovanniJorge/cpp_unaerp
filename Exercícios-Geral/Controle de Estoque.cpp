/*Controle de Estoque em Loja de Eletrônicos*/

#include<stdio.h>
#include<stdlib.h>

int quantidade_produtos[] = {12, 7, 5, 20, 9}, quantidade, nome;
const char nome_produto[5][11] = {"computador", "telefone", "celular", "teclado", "mouse"};

main()
{
	printf("\nProdutos disponiveis:");
	for (int i=0;i<5;i++)
	{
		printf("\n%i. %s - %i unidades", i+1, nome_produto[i], quantidade_produtos[i]);
	}
	printf("\n\nInforme o numero do produto gostaria de atualizar: ");
	scanf("%i", &nome);
	printf("Informe a nova quantidade do produto: ");
	scanf("%i", &quantidade);

	for (int i=0;i<5;i++)
	{
		if (nome == i+1)
		{
			quantidade_produtos[i] = quantidade;
		}
	}
	
	printf("\nProdutos disponiveis (ATUALIZADO):");
	for (int i=0;i<5;i++)
	{
		printf("\n%s - %i unidades", nome_produto[i], quantidade_produtos[i]);
	}
}