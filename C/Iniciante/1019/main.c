#include<stdio.h>

int converte60(int *segundos)
{
	int retorno = 0;
	if(*segundos>60)
	{
		retorno = *segundos/60;
		*segundos = *segundos%60;
	}
	return retorno;
}

int main(void)
{
	int tempoEmSegundos, minutos, horas;

	scanf("%d",&tempoEmSegundos);
	if(tempoEmSegundos < 0)
	{
		return -1;/* Caso de erro (não existe tempo negativo) */
	}

	minutos = converte60(&tempoEmSegundos);
	horas = converte60(&minutos);

	printf("%d:%d:%d\n", horas,minutos, tempoEmSegundos );

	return 0;
}
