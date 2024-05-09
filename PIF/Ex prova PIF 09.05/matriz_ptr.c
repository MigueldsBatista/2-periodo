#include <stdio.h>
#include <stdlib.h>

int main(){
    int size, i, j;
    printf("digite as dimensões AxA da matriz identidade: \n");
    scanf("%d", &size);
    
    int **matriz = (int**)calloc(size, sizeof(int*));//alocando para LINHAS
    for(i=0;i<size;i++){
        matriz[i]=(int *)calloc(size, sizeof(int));//alocando para COLUNAS    
    }

    for(i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i==j) matriz[i][j]=1;
            }
    }
     for(i=0;i<size;i++){
        printf("\n");
        for(j=0;j<size;j++){
            printf("[%d]", matriz[i][j]);
        }
    }

    for(i=0;i>size;i++)free(matriz[i]);
    free(matriz);
    return 0;
}