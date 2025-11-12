/* Algoritmo para transformar celsius para fahrenheit*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int c, f;

main()
{
	// 1. Ler os dados
	printf("Informe os dados da temperatura em celsius: ");
	scanf("%i", &c);
	
	// 2. Calcular os valores
	f = 1.8*c + 32;
	
	// 3. Resultado
	printf("Valor em fahrenheint: %i\n", f);
	
	// 4. Terminar
	system("pause");
}
