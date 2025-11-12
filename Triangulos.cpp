/*Algoritmo de Triangulos*/

#include<stdio.h>
#include<stdlib.h>

float la, lb, lc;

main()
{
	// 1. Informe os dados
	printf("O lado A e o maior lado do triangulo");
	printf("\n\nInforme o valor do lado A: ");
	scanf("%f", &la);
	printf("Informe o valor do lado B: ");
	scanf("%f", &lb);
	printf("Informe o valor do lado C: ");
	scanf("%f", &lc);
	
	// 2. Compare os dados
	if(la>=lb+lc)
	{
	    printf("\nO triangulo nao existe\n\n");
	}
	else
	{
		if(la==lb && lb==lc)
		{
			printf("\nO triangulo e equilatero\n\n");
		}
		else
		{
			if(la==lb || la==lc || lb==lc)
			{
				printf("\nO triangulo e isosceles\n\n");
			}
			else
			{
				printf("\nO triangulo e escaleno\n\n");
			}
		}
	}
	
	// 3. Termino
	system("pause");
}