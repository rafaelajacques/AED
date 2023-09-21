#include <stdio.h> // necess�ria para as fun��es printf e scanf
#include <stdlib.h>// necess�rio p/ as fun��es rand() e srand()
#include<time.h> //necess�rio p/ fun��o time()
#include <locale.h> // necess�ria para deixar palavras acentuadas

int main()
{
  
  int i, numero;
  FILE *file;

  setlocale(LC_ALL, "Portuguese");
  
  printf("Digite um n�mero base: ");
  scanf ("%d", &numero);
  
  file = fopen("Lista 04 - 01.txt","w");
  
  fprintf(file,"%d n�meros gerados!\n", numero);
  printf("\n%d n�meros gerados!\n", numero);
  
  srand(time(NULL)); // Impede que haja repeti��o de n�meros
  
	do{
		fprintf(file,"%d\n", rand() % 100); //Gera n�meros aleat�rios
		i++;
	}while(i<numero);
	
  return 0;
}
