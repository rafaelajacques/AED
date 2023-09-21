#include <stdio.h>

int main() {
    char nomeArquivo[100]; // Considerando nome até 100 caracteres
    char caractere;
    int contagem = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    printf("Digite o caractere a ser contado: ");
    scanf(" %c", &caractere);

    FILE *arquivo = fopen(nomeArquivo, "r"); // abrindo o arquivo
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int c;
    while ((c = fgetc(arquivo)) != EOF) { //Procuro um caracter no arquivo
        if (c == caractere)
            contagem++; // Fazendo a contagem
    }

    fclose(arquivo); //Fechando o arquivo

    printf("O caractere '%c' ocorre %d vezes no arquivo.\n", caractere, contagem); // Demonstando resultado

    return 0;
}
