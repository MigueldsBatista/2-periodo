#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int novo_tamanho;

    // Alocar memória para um array de 5 inteiros
    array = (int *)malloc(5 * sizeof(int));
    if (array == NULL) {
        printf("Erro: não foi possível alocar memória.\n");
        return 1;
    }

    // Preencher o array com alguns valores iniciais
    for (int i = 0; i < 5; i++) {
        array[i] = i;
    }

    // Imprimir o array original
    printf("Array original: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Pedir ao usuário para fornecer o novo tamanho do array
    printf("Digite o novo tamanho do array: ");
    scanf("%d", &novo_tamanho);

    // Redimensionar o array
    array = (int *)realloc(array, novo_tamanho * sizeof(int));
    if (array == NULL) {
        printf("Erro: não foi possível realocar memória.\n");
        return 1;
    }

    // Imprimir o array redimensionado
    printf("Array redimensionado: ");
    for (int i = 0; i < novo_tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Liberar a memória alocada
    free(array);

    return 0;
}
