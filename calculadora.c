//Código em linguagem C
#include <stdio.h>
// Programa 'Lê e imprime um valor'

int main()
{
	system("cls");
	int A=0;
	int B=0;
	
	printf("Informe um valor A inteiro: \n");
	
	scanf("%i",&A);
	
	printf("Informe um valor B inteiro: \n");
	
	scanf("%i",&B);

	
		printf("A SOMA DE  A e B eh %i \n" , A+B );
		printf("A MULTIPLICAO DE  A e B eh %i \n" , A*B );
		printf("A DIVISAO DE  A E B eh %i \n" , A/B );
		printf("A SUBTRACAO DE  A e B eh %i \n" , A-B );

	return 1;
}
