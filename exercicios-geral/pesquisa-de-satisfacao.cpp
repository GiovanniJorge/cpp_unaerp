/*Pesquisa de Satisfação*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int notas[10][4], i, j, numero;
float media[4], maior=0;
const char nomes[4][9]={"Ambiente", "Comida", "Servico", "Preco"};

main()
{
	printf("MEDIA DE CADA ASPECTO");
	srand(time(NULL));
	for(i=0;i<4;i++)
	{
		for(j=0;j<10;j++)
		{
			notas[j][i]=rand()%10;
			media[i]+=notas[j][i];
		}
		media[i]/=10;
		if(media[i]>maior)
		{
			maior=media[i];
			numero=i;
		}
		printf("\n%s: %.1f", nomes[i], media[i]);
	}
	printf("\n\nO aspecto que teve maior media foi: %s\n\n", nomes[numero]);
}