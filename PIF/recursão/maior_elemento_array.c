#include <stdio.h>
#include <stdlib.h>


int maior_elemento_array(int array[], int length, int index){//0 inicial 


//index = posição do maior elemento
//percorre de tras pra frente
if(length==0) return array[index];

else {        //pos 10     pos 0    elemento 10 é maior que elemento 0?
    if (array[length-1] > array[index]) return maior_elemento_array(array, length-1, length-1);//length vira index
    else return maior_elemento_array(array, length-1, index);

}
}
int main(){

    int array[10]={1, 3, 7, 9, 124, 44, 74, 8, 10, 12};

    printf("Maior elemento: %d", maior_elemento_array(array, 10, 0));  

    return 0;
}