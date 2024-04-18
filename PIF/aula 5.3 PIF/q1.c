#include <stdio.h>
//Peça as dimensões e valores de uma matriz ao usuario e faça a soma dos elementos da primeira coluna com a primeira linha
int main()
{
    int order, i, j, linha1=0, coluna1=0;
    printf("digite o tamanho da matriz: ");
    scanf("%d", &order);
    int matriz[order][order];
    //for de preencher
    for(i=0;i<order;i++){
        printf("\n");
        for(j=0;j<order;j++){
            printf("digite o valor %d da linha %d matriz: ", j, i);
            scanf("%d", &matriz[i][j]);}}

            //for de print
        for(i=0;i<order;i++){
        printf("\n");
        for(j=0;j<order;j++){
            if (i==0){
                linha1=linha1+matriz[i][j];
            }
            if(j==0){
                coluna1=coluna1+matriz[i][j];
            }
            
            printf("%d", matriz[i][j]);}}
            
            printf("\nA soma das colunas com as linhas é %d", linha1+coluna1);


}