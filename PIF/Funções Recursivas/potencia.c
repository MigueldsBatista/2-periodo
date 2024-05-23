#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente){
    if(expoente==0) return 1;
    else return base * potencia(base, expoente-1);
}



int main(){

    int base, expoente;
    printf("digite a base: \n");
    scanf("%d", &base);
    printf("digite o expoente: \n");
    scanf("%d", &expoente);

    printf("resultado de %d elevado a %d é %d\n",base, expoente, potencia(base, expoente) );
}