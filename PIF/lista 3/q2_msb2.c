#include <stdio.h>

// Função para calcular o número de dígitos de um número
int nd(int n) {
    if (n == 0) return 1; // Se o número for zero, retorna 1 é necessario que n seja int e não float
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

// Função para preencher a matriz com valores inseridos pelo usuário
int fazer(int linha, int coluna, int matriz[linha][coluna]) {
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    return 0;
}

// Função para multiplicar duas matrizes e imprimir o resultado formatado
int matriz(int linha, int coluna, int A[], int matriz[linha][coluna]) {
    for (int i = 0; i < linha; i++) {
        printf("\n"); // Nova linha para cada linha da matriz
        for (int j = 0; j < coluna; j++) {//*/d vai ocupar A[j] espaços
            printf("%*d\t", A[j], matriz[i][j]); // Imprime cada elemento da matriz com largura ajustada
        }
    }
    return 0;
}

int main(void) {
    int ia, ib, ja, jb, i, j, k;
    scanf("%d%d%d%d", &ia, &ib, &jb, &ja);

    // Declaração das matrizes
    int GA[ia][ib], AM[ib][jb], MC[jb][ja], GM[ia][jb], GC[ia][ja];//matriz resultante é a linha da primeira e coluna da segunda e a multiplicação é o somatorio da linha com coluna

    // Preenche as matrizes com valores inseridos pelo usuário
    fazer(ia, ib, GA);
    fazer(ib, jb, AM);
    fazer(jb, ja, MC);

    // Multiplica as duas primeiras matrizes: GA e AM
    for (i = 0; i < ia; i++) {
        for (j = 0; j < jb; j++) {
            GM[i][j] = 0;
            for (k = 0; k < ib; k++) {
                GM[i][j] += GA[i][k] * AM[k][j];
            }
        }
    }

    // Multiplica a matriz resultante pela terceira matriz: GM e MC
    for (i = 0; i < ia; i++) {
        for (j = 0; j < ja; j++) {
            GC[i][j] = 0;
            for (k = 0; k < jb; k++) {
                GC[i][j] += GM[i][k] * MC[k][j];
            }
        }
    }

    // Calcula a largura máxima de cada coluna para impressão formatada
    int maxd[ja];
    for (j = 0; j < ja; j++) {
        maxd[j] = 0;
        for (i = 0; i < ia; i++) {
            int d = nd(GC[i][j]);//Apenas pra evitar presentation error no beecrowd
            if (d > maxd[j]) {
                maxd[j] = d;
            }
        }
    }

    // Imprime a matriz resultante GC formatada
    matriz(ia, ja, maxd, GC);

    return 0;
}
