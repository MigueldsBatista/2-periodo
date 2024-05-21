#include <stdio.h>

void imprimir_crescente(int x){
if(x==0){
    printf("%d\n", x);
}
else{
    imprimir_crescente(x-1);//vai chegar até zero 
 //   Primeira chamada: imprimir(3)
//        x não é 0, então chama imprimir(2)
 //           x não é 0, então chama imprimir(1)
//                x não é 0, então chama imprimir(0)
 //                   x é 0, imprime 0 e retorna.
 //ele começa a desempilhar os valores começando pelo ultimo retornado

    printf("%d\n", x);//e imprime
}

}    
void imprimir_decrescente(int x){
if(x==0){
    printf("%d\n", x);
}
else{
    

    printf("%d\n", x);
    imprimir_decrescente(x-1);
}


}    

int main()
    {
        int x;
        printf("digite o número:");
        scanf("%d", &x);
        printf("ordem crescente\n");
        imprimir_crescente(x);
        printf("ordem decrescente\n");
        imprimir_decrescente(x);
        return 0;
    }
    