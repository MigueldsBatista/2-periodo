#include <stdio.h>
//matriz secundária
int main()
{
    int order, i, j;
    printf("digite a ordem da matriz: ");
    scanf("%d", &order);
    int matriz[order][order];
    for(i=0;i<order;i++){
        printf("\n");
        for(j=0;j<order;j++){
            if(i+j==order-1){//quando o indice da coluna e o indice da linha for igual a ordem da matriz menos um, ele vai preencher com 1, senão 0
                matriz[i][j]=1;
            }
            else
            {matriz[i][j]=0;

            }
            printf("[%d]", matriz[i][j]);
        }

    }
    
}
