#include <stdio.h>

int main(int argc, char const *argv[]) {
    int i, j, order, caso;
    float sum = 0, media = 0;
    
    scanf("%d", &order);
    int matriz[order][order];
    scanf(" %c", &caso);
    
    for(i = 0; i < order; i++) {
        for(j = 0; j < order; j++) {
            scanf("%d", &matriz[i][j]);
            if (j > i) {
                sum += matriz[i][j];
            }
        }
    }

    media = sum / ((order * order - order) / 2);

    if(caso == 'M') {
        printf("%.1f\n", media);
    }
    else if(caso == 'S') {
        printf("%.1f\n", sum);
    }
    
    return 0; // Adicionado o retorno indicando o sucesso da execução
}
