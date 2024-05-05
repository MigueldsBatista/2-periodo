#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas;

    // Solicitar ao usuário o número de linhas e colunas
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    // Alocar memória para a matriz e inicializar com zeros
    int **matriz = (int **)calloc(linhas, sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)calloc(colunas, sizeof(int));
    }

    // Imprimir a matriz
    printf("Matriz identidade:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if(i==j) matriz[i][j]=1;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberar memória alocada para a matriz de forma reversa
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
