#include<stdio.h>

int quantidade(int* soma, int valorCedula)
{
	int retorno = (*soma - (*soma%valorCedula))/valorCedula;
	*soma = *soma%valorCedula;
	return retorno;
}

int main()
{
	int valor = 0;

	scanf ("%d", &valor);
	printf ("%d\n",valor);

	if(valor > 0 && valor <1000000)
	{
		printf ("%d nota(s) de R$ 100,00\n", quantidade(&valor, 100));
		printf ("%d nota(s) de R$ 50,00\n", quantidade(&valor, 50));
		printf ("%d nota(s) de R$ 20,00\n", quantidade(&valor, 20));
		printf ("%d nota(s) de R$ 10,00\n", quantidade(&valor, 10));
		printf ("%d nota(s) de R$ 5,00\n", quantidade(&valor, 5));
		printf ("%d nota(s) de R$ 2,00\n", quantidade(&valor, 2));
		printf ("%d nota(s) de R$ 1,00\n", valor);
	}
	return 0;
}
