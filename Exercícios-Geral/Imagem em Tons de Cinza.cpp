/*Imagem em Tons de Cinza*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int imagem[3][3], imagem_clareada[3][3], i, j;

main()
{
	srand(time(NULL));
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			imagem[i][j]=rand()%255;
			imagem_clareada[i][j]=imagem[i][j]+50;
			if(imagem_clareada[i][j]>255)
			{
				imagem_clareada[i][j]=255;
			}
		}
	}
	printf("MATRIZ INICIAL:\n");
	for(i=0;i<3;i++)
	{
		printf("| ");
		for(j=0;j<3;j++)
		{
			printf("%3i ", imagem[i][j]);
		}
		printf("|\n");
	}
	printf("\nMATRIZ CLAREADA:\n");
	for(i=0;i<3;i++)
	{
		printf("| ");
		for(j=0;j<3;j++)
		{
			printf("%3i ", imagem_clareada[i][j]);
		}
		printf("|\n");
	}
}