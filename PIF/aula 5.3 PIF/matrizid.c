#include <stdio.h>
int main()
{
    int order, i, j;
    printf("digite o tamanho da matriz: ");
    scanf("%d", &order);
    int matriz[order][order];
    for(i=0;i<order;i++){
        printf("\n");
        for(j=0;j<order;j++){
            if(i==j){
                matriz[i][j]=1;
            }
            else{
                matriz[i][j]=0;
            }
            printf("[%d]", matriz[i][j]);
        }
    }
    
}
