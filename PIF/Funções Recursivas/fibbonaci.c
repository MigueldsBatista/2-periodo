#include <stdio.h>
#include <stdlib.h> // 0 1 1 2 3 5 8

int fibbonaci(int x){
    if(x==1) return 0;
    else if(x==2) return 1;
    else return(fibbonaci(x-1) + fibbonaci(x-2));
}

int main(){
    int x;
    scanf("%d", &x);
    printf("%d", fibbonaci(x));
}