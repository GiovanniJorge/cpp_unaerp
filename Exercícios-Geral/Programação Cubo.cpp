/* Algorítmo para calcular área e volume de um paralelepípdo*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int t, c, l, a1, a2, a3, v;

main()
{
	// 1. Ler dados
	printf("Informe a altura do objeto: ");
	scanf("%i", &t);
	
	// 2. Ler dados
	printf("Informe o comprimento do objeto: ");
	scanf("%i", &c);
	
	// 3. Ler dados
	printf("Informe a largura do objeto: ");
	scanf("%i", &l);
	
	// 4. Calcular as áreas
	a1 = t*c;
	a2 = t*l;
	a3 = l*c;
	
	// 5. Apresentar o resultado das áreas
	printf("O valor da area1: %i\n", a1);
	printf("O valor da area2: %i\n", a2);
	printf("O valor da area3: %i\n", a3);
	
	// 6. Calcular o volume
	v = t*l*c;
	
	// 7. Apresentar osdados de volume
	printf("O valor do volume do objeto: %i\n", v);
	
	// 8. Término
	system("pause");
}