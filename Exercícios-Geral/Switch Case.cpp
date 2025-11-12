/*Switch case*/

#include<stdio.h>
#include<stdlib.h>

int teste;

main()
{
	printf("Informe o valor do teste: ");
	scanf("%i", &teste);
	
	switch(teste)
	{
		case 1:
			printf("\nValor do teste e 1");
			break;
		case 2:
			printf("\nValor do teste e 2");
			break;
		case 3:
			printf("\nValor do teste e 3");
			break;
		default:
			printf("\nValor nao considerado para o teste");
			break;
	}
	printf("\n\n");
	
	system("pause");
}
