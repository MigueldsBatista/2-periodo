#include <stdio.h>
// exemplo primitivo da natureza de uma função
int maximo(int a, int b); //Primeiro se declara a função antes da função main e as variaveis
//arquivos .h contem os protótipos  das funções chamadas no seu programa

int main(){
    int a, b, max;

    printf("digite dois numeros de 0 a 100: \n");
    scanf("%d %d", &a, &b);
    max=maximo(a, b);
    printf("O maior dos dois numeros eh %d", max);
    return 0;
}

int maximo(int a, int b){//depois do main se define a função e coloca o escopo do codigo
    int max;
    if (a>b) max=a;
    else max=b;
}