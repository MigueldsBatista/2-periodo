//  1 2 3 4 5 6 7 08 09 10 11
//  0 1 1 2 3 5 8 13 21 34 55
#include <stdio.h>

int fibonnaci(int x){//acha o enésimo termo da sequencia de fibbonaci ex x=5 resultado=3
 
if(x==1)return 0; //caso base

else if(x==2)return 1;

else{
return fibonnaci(x-1)+fibonnaci(x-2);
}
}

int main()
{
    int x;

    printf("digite uma posição n para saber o enésimo numero de fibbonaci equivalente: ");
    scanf("%d", &x);
    printf("posição %d = %d\n", x, fibonnaci(x));
    return 0;
}
