#include <stdio.h>
#include <locale.h>

int fatorial (int x, int fat){

	for(fat = 1; x > 1; x--){
      fat = fat * x;
  	}
 		 printf("\n%d", fat);
}

int main ()
{
	int num, fat;
	setlocale(LC_ALL, "");
	printf("Digite um número inteiro:");
	if(num < 0){
		printf ("\nDigite um numero válido: ");
	}	
	scanf("%d",&num);
	fatorial(num, fat);
	
	return 0;
}
