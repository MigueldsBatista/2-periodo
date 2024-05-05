#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;

    // Pedir ao usuário para fornecer o tamanho do array
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    // Alocar dinamicamente memória para o array
    int *array = (int *)malloc(tamanho * sizeof(int));

    // Verificar se a alocação de memória foi bem-sucedida
    if (array == NULL) {
        printf("Erro: Não foi possível alocar memória.");
        return 1; // Sair do programa com código de erro
    }

    // Preencher o array com valores fornecidos pelo usuário
    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array[i]);
    }

    // Imprimir o array
    printf("Array preenchido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Liberar a memória alocada
    free(array);

    return 0;
}
