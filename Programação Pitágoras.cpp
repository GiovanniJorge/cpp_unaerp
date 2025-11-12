/* Algorítmo para calcular a fórmula de pitágoras*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float c1, c2, h;

main()
{
// 1. Ler dados
printf("Informe o valor do cateto 1: ");
scanf("%f", &c1);

// 2. Ler dados
printf("Informe o valor do cateto 2: ");
scanf("%f", &c2);

// 3. Calcular hipotenusa
h = sqrt(c1*c1 + c2*c2);

// 4. Resultados
printf("O valor da hipotenusa é de %f\n", h);

// 5. Término
system("pause");	
}