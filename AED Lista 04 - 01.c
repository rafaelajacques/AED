#include <stdio.h> // necessária para as funções printf e scanf
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include<time.h> //necessário p/ função time()
#include <locale.h> // necessária para deixar palavras acentuadas

int main()
{
  
  int i, numero;
  FILE *file;

  setlocale(LC_ALL, "Portuguese");
  
  printf("Digite um número base: ");
  scanf ("%d", &numero);
  
  file = fopen("Lista 04 - 01.txt","w");
  
  fprintf(file,"%d números gerados!\n", numero);
  printf("\n%d números gerados!\n", numero);
  
  srand(time(NULL)); // Impede que haja repetição de números
  
	do{
		fprintf(file,"%d\n", rand() % 100); //Gera números aleatórios
		i++;
	}while(i<numero);
	
  return 0;
}
