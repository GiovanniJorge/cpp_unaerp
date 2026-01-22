/*Despesas Mensais*/

#include<stdio.h>
#include<stdlib.h>

int i=0, mes_menor, mes_maior;
float despesa_mes[12], maior=0, menor, media;

main()
{
	printf("Informe as Despesas Totais de Cada Mes\n");
	for(i=0;i<12;i++)
	{
		printf("Mes %i: ", i+1);
		scanf("%f", &despesa_mes[i]);
		media+=despesa_mes[i];
	}
	media/=12;
	menor=despesa_mes[0];
	for(i=0;i<12;i++)
	{
		if(despesa_mes[i]>maior)
		{
			maior=despesa_mes[i];
			mes_maior=i;
		}
		if(despesa_mes[i]<menor)
		{
			menor=despesa_mes[i];
			mes_menor=i;
		}
	}
	printf("\nO maior valor de despesa foi no mes %i: R$%.2f", mes_maior, maior);
	printf("\nO menor valor de despesa foi no mes %i: R$%.2f", mes_menor, menor);
	printf("\nA media dos 12 meses foi: R$%.2f\n\n", media);
}