#include <stdio.h>
#include <locale.h>

void multiplicacao (int x){
	int i,j;
	for(i=1; i<=x; i++){
		for(j=1; j<=i; j++){
			printf("%d ",i*j);
		}
		printf("\n");	
	}
}

int main(){
	int num;
	setlocale(LC_ALL, "");
	printf("Digite um número entre 1 e 9: ");
	scanf("%d", &num);
	if(num <1 || num >9){
		printf("Digite um número válido!");
	}while (num <1 || num >9);
	
	multiplicacao(num);
	
	return 0;
}
