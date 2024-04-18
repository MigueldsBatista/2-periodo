#include <stdio.h>
//uma matriz e ordem crescente que o usuario escolhe o tamanho
int main()
{
    int order, i, j, element=0;
    printf("digite o tamanho da matriz:");
    scanf("%d", &order);
    int matriz[order][order];
    for(i=0;i<order;i++){
        printf("\n");
        for(j=0;j<order;j++){
                matriz[i][j]=i*order+j;
                if (matriz[i][j]<9){
                printf("[0%d]", matriz[i][j]);
            }
            else {
                printf("[%d]", matriz[i][j]);

            }
        }
        }
    }
  
