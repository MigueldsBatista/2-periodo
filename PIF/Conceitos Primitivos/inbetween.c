#include <stdio.h>

int main(void){

int a, b, i=0, big=0, small=0, sum=0;
printf("\033[H\033[J");

printf("digite o primeiro número: ");
scanf("%d", &a);
            
printf("digite o segundo número: ");
scanf("%d", &b);

if ((a>b))
{
    printf("o maior numero é %d\n", a);
    big=a;
    small=b;
}else{
    printf("o maior numero é %d\n", b);
    small=a;
    big=b;
}
for(i=small;i<=big;i++){//atribui o índice a pra começar no menor número e rodar enquanto for menor ou igual ao maior número
//e durante o processo ele vai somando os números entre A e B
    sum=sum+i;
    printf("%d+%d=%d\n",i,sum-i, sum);
}
}