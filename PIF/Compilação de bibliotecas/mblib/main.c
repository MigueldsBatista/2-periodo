#include <stdio.h>
#include "mblib.h"
/* 

gcc -c mblib.c -o mblib.o 

gcc main.c mblib.o -o programa 

./programa.exe    executa o arquivo.exe de saída */


int main()
{
int n1, n2;

    printf("digite um numero A e um numero B para saber o valor de A elevado a B: ");
    printf("n1:\n");
    scanf("%d", &n1);
    printf("n2:\n");
    scanf("%d", &n2);
    int resultado = potencia(n1, n2);
    printf("%d", resultado);
return 0;    
}
