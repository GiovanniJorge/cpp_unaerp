#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int i, j, n, b;

main()
{
	printf("Informe o valor da matriz: ");
	scanf("%i", &n);
	
	char m[n][n];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nInforme o valor de m[%i][%i]: ", i, j);
			scanf(" %c", &m[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n|");
		for(j=0;j<n;j++)
		{
			printf(" %c", toupper(m[i][j]));
		}
		printf(" |");
	}
	
	printf("\n\n");
	system("pause");
}