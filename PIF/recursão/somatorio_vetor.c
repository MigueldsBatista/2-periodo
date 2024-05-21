#include <stdio.h>
#include <stdlib.h>
//caso base 

//a função precisa se aproximar do caso base a cada iteração

//a função deve chamar a si mesma
int somatorio_vetor(int array[], int size){
if(size==0) return array[0];

else{  //ultimo elemento da lista
    return array[size-1] + somatorio_vetor(array , size-1);
}
}

int main(){
    int array[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    printf("soma do vetor é %d\n", somatorio_vetor(array, 10));
}