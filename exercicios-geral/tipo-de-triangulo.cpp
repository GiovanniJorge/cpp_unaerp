/* Determinar o tipo de triangulo com base no comprimento dos lados */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float A, B, C;

main()
{
	// 1. Ler dados
	printf("Aviso: O lado A devera ser o maior lado do triangulo");
	printf("\n\nInforme o comprimento do lado A: ");
	scanf("%f", &A);
	
	printf("Informe o comprimento do lado B: ");
	scanf("%f", &B);
	
	printf("Informe o comprimento do lado C: ");
	scanf("%f", &C);
	
	// 2. Comparar dados
	if(A<B+C)
	{
		if(pow(A,2)==pow(B,2)+pow(C,2))
		{
			printf("\nResultado: Triangulo retangulo\n\n");
		}
		else
		{
			if(pow(A,2)<pow(B,2)+pow(C,2))
			{
				printf("\nResultado: Triangulo acutangulo\n\n");
			}
			else
			{
				printf("\nResultado: Triangulo obtusangulo\n\n");
			}
		}
	}
	else
	{
		printf("\nResultado: Nenhum triangulo e formado\n\n");
	}
	
	// 3. Termino
	system("pause");
}