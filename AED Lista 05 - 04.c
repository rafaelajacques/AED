#include <stdio.h>
#include <locale.h>

int tabuada (int x, int contador){
	int soma = 0;
	for(contador = 0; contador <= 10; contador ++){
		printf("%d * %d = %d \n",x, contador, x*contador);
		soma += x*contador;
	}
	return soma;
}

int main ()
{
	setlocale(LC_ALL, "");
	int num, contador, total;
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	total = tabuada(num, contador); // Chama a fun��o tabuada e armazena a soma em "total"
    printf("\n  Soma = %d\n", total); // Imprime a soma total
	
	
	return 0;
}
	
