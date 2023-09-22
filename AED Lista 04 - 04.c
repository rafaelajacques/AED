#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	
	setlocale(LC_ALL, "Portuguese");

	char nomeArquivo [40];
	FILE *file;
	FILE *arq;
	char caracter;

	printf("Insira o nome do arquivo: ");
	scanf("%s",nomeArquivo);
	
	file = fopen(nomeArquivo, "r"); // abrindo o arquivo
	if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
	}
 	  
	arq = fopen("ArqFinal.txt", "w+"); // abrindo o arquivo
	if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
	}     
	
	while((caracter = fgetc(file)) != EOF){
		if(caracter == 'a'|| caracter == 'A' || caracter == 'e' || caracter == 'E' || caracter == 'i' || caracter == 'I'||
		caracter == 'o' || caracter == 'O' || caracter == 'u' || caracter == 'U'){
			fputc('*', arq );
		}else {
			fputc(caracter, arq);
		}
	}
	
	printf("Alterações realizadas!");
	
	fclose (file);
	fclose (arq);
		
    return 0;

}
