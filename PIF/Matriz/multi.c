#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, colunaA, linhaA, colunaB, linhaB, colunaB_i;

    while (1) {
        printf("Multiplicacao de Matriz[M][N]xMatriz[K][L] para M=L\n");
        printf("Digite a quantidade de linhas da matriz 1: ");
        scanf("%d", &linhaA);
        printf("Digite a quantidade de colunas da matriz 1: ");
        scanf("%d", &colunaA);
        printf("Digite a quantidade de linhas matriz 2: ");
        scanf("%d", &linhaB);
        printf("Digite a quantidade de colunas da matriz 2: ");
        scanf("%d", &colunaB);

        if (colunaA == linhaB) break; 
        else printf("Os valores da coluna A e da linha B sao diferentes\n");
        
        
    }

    int matriz1[linhaA][colunaA], matriz2[linhaB][linhaB], matriz3[linhaA][colunaB];

    for (i = 0; i < linhaA; i++) {
        for (j = 0; j < colunaA; j++) {
            printf("Digite o elemento [%d] da linha [%d] da matriz 1: ", j + 1, i + 1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (i = 0; i < linhaB; i++) {
        for (j = 0; j < colunaB; j++) {
            printf("Digite o elemento [%d] da linha [%d] da matriz 2: ", j + 1, i + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for(i=0;i<linhaA;i++){
        for(j=0;j<colunaB;j++){
            matriz3[i][j]=0;
            for(colunaB_i=0;colunaB_i<colunaA;colunaB_i++){
                matriz3[i][j]+=matriz1[i][colunaB_i]*matriz2[colunaB_i][j]; //nam atriz A o que itera é a linha e na matriz B o que itera é a coluna

            }
        }
    }
   //print matriz A
    printf("Matriz A\n\n");
    for(i=0;i<linhaA;i++){
        printf("\n");
        for(j=0;j<colunaA;j++){
            printf("%3d", matriz1[i][j]);
        }
    }
    
 //print matriz B
 printf("\n\nMatriz B\n\n");
    for(i=0;i<linhaB;i++){
        printf("\n");
        for(j=0;j<colunaB;j++){
            printf("%3d", matriz2[i][j]);
        }
    }
    
//Resultado
    printf("\nMatriz C");
    for(i=0;i<colunaB;i++){
        printf("\n");
        for(j=0;j<linhaA;j++){
            printf("%3d", matriz3[i][j]);
        }
    }

    return 0;
}
