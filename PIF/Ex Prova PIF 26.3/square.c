#include <stdio.h>

int square(int a, int b);

int main(){
    int a, b;
    printf("digite dois numeros para saber o primeiro elevado ao segundo: ");
    scanf("%d %d", &a, &b);
    printf("O resultado de %d elevado a %d eh: %d",a, b, square(a, b));
}

int square(int a, int b){
    int result=1, i;
    if (b<0) return 0;
    for(i=0; i<b; i++){
        result=a*result;
    }
    return result;
}