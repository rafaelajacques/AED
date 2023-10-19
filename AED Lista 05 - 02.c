#include <stdio.h>
#include <locale.h>

void verificar (int x)
{
	if(x % 2 == 0){
		printf("O número é par!");
	}else{
		printf("O número é ímpar!");
	}	
}

int main(){
	int num;
	setlocale(LC_ALL, "");
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	verificar(num);
	
	return 0;
}
