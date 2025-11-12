/*Preparar algoritmo para clacular o numero de pontos como coordenadas de valor inteiro contidas na elipse: x²/16 + y²/25 = 1.
Os pontos no interior da curva sao aqueles onde a funçao da elipse e menor que 1. Os valores das coordenadas estao limitados aos eixos
da elipse, isto e, -4 <= x <= 4 e -5 <= y <= 5 (obs: incluir os resultados de cada ponto em forma de tabela)*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int x, y;

main()
{
	printf("Coordenadas x e y contidas na elipse:\n");
	printf("\n X |  Y");
	
	for(x=-4;x<=4;x++)
	{
		for(y=-5;y<=5;y++)
		{
			if(pow(x,2)/16 + pow(y,2)/25 < 1)
			{
				printf("\n%2.1i | %2.1i", x, y);
			}
		}
	}
	
	printf("\n\n");
	system("pause");
}