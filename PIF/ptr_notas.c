#include <stdio.h>
//-----------------------------------------------------------------------------------------------

float media(float *notas, int
tamanho){

int i;

float media = 0.0;

for(i=0; i < tamanho; i++){

media = media + *(notas++);

}

return media/tamanho;

}
//-----------------------------------------------------------------------------------------------
int main()
{
    float notas[]={8.9, 6.5, 8.43, 7.5};
    float resultado;
    int tamanho;
    tamanho=sizeof(notas)/sizeof(notas[0]);
    resultado=media(notas, tamanho);//Não precisa de & pois o nome do array ja é o endereço da primeira variavel
    printf("A media das notas e: %.2f\n", resultado);
    return 0;
}
