
#include <stdlib.h>
#include <stdio.h>
int somatorio(int x){
    
//caso base 

//a função precisa se aproximar do caso base a cada iteração

//a função deve chamar a si mesma
if(0==x) return 0;

else{
    return x + somatorio(x-1);
}

}

int main(){
    int x;
    printf("digite um numero para saber a soma de 1 até ele: ");
    scanf("%d", &x);

    printf("%d", somatorio(x));
}