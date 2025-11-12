/*Algoritmo para calcular o resultado de aprovacao de um aluno*/

#include<stdio.h>
#include<stdlib.h>

float t1, t2, t3, p1, p2, p3, fr, m;

main()
{
	// 1. Ler dados t1
	printf("Informe o valor da prova trimestral 1: ");
	scanf("%f", &t1);
		// 2. Ler dados t2
	printf("Informe o valor da prova trimestral 2: ");
	scanf("%f", &t2);
	// 3. Ler dados t3
	printf("Informe o valor da prova trimestral 3: ");
	scanf("%f", &t3);
	
		// 4. Ler dados p1
	printf("Informe o valor da prova parcial 1: ");
	scanf("%f", &p1);
	// 5. Ler dados p2
	printf("Informe o valor da prova parcial 2: ");
	scanf("%f", &p2);
	// 6. Ler dados p3
	printf("Informe o valor da prova parcial 3: ");
	scanf("%f", &p3);
	
		// 7. Ler dados f
	printf("Informe o valor da frenquecia do aluno: ");
	scanf("%f", &fr);
	
	// 8. Verificar frenquecia do aluno
	if(fr<75)
	{
		printf("\nO aluno foi REPROVADO devido a sua frenquecia inferior a 75%\n\n");
	}
	else
	{
		// 9. Calcular media
		m = (((t1+p1)/2)+(t2+p2)+(t3+p3))/5;
		if(m<7)
		{
			printf("O aluno foi REPROVADO devido a sua meida inferior a 7");
			printf("\nA media do aluno foi: %0.1f\n\n", m);
		}
		else
		{
			printf("\nO aluno foi APROVADO");
			printf("\nA media do aluno foi: %0.1f\n\n", m);
		}
	}
	// 10. Termino
	system("pause");
}