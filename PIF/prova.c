#include <stdio.h>
  #include <string.h>
    #include <malloc.h>
void swap(int *a, int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
printf("Novo valor de a: %d\n Novo valor de b: %d", *a, *b);
printf("Novo endereço de a: %p\n Novo endereço de b: %p\n", a, b);

}
int main()
{
    int a, b;
    a=5;
    b=4;
    printf("endereço de a: %p\nendereço de b: %p\n", &a, &b);
    swap(&a, &b);
    return 0;
}
