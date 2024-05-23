#include <stdio.h>

int main() {
    FILE *file = fopen("numeros.txt", "rb+");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    // Solicita ao usuário a posição do número
    int posicao;
    printf("Digite a posição do número: ");
    scanf("%d", &posicao);

    // Move o ponteiro para a posição especificada pelo usuário
    
    fseek(file, sizeof(char)*posicao, SEEK_SET);

    // Lê e imprime o número na posição especificada
    char numero=fgetc(file);
    printf("Número na posição %d do arquivo: %c\n", posicao, numero);


    
    fclose(file);

    return 0;
}
