#include <stdio.h>
int main()
{//Matriz transposta
    int order, i, j;
    printf("digite a ordem da matriz:");
    scanf("%d", &order);
    int matriz[order][order];

    for(i=0;i<order;i++){
        printf("\n");
        for(j=0;j<order;j++){
            matriz[i][j]=i*order+j;}}
    for(i=0;i<order;i++){
        printf("\n");
        for(j=0;j<order;j++){
            printf("[%d]", matriz[j][i]);

        }
    }
    }