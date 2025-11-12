/*Notas de Alunos*/

#include<stdio.h>
#include<stdlib.h>

float nota_aluno[6], media=0;

main()
{
	for(int i=0;i<6;i++)
	{
		printf("Informe a nota da prova %i: ", i+1);
		scanf("%f", &nota_aluno[i]);
		media += nota_aluno[i];
	}
	media /= 6;
	printf("\nA sua media foi: %.1f", media);
	if(media >= 6)
	{
		printf("\n\nParabens! Voce foi aprovado.\n\n");
	}
	else
	{
		printf("\n\nInfelizmente voce foi reprovado.\n\n");
	}
}