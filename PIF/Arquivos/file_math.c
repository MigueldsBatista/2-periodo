#include <stdio.h>
#include <stdlib.h> // Para usar a função atoi


int main()
{
    int cont=0;



    FILE *file =fopen("numeros.txt", "w");
    fprintf(file, "10\n");
    fprintf(file, "20\n");
    fclose(file);
    
    file=fopen("numeros.txt", "r");

    if(file==NULL){
      printf("erro ao abrir o arquivo");
       return 1;
    } 

    char line[100];// somente se tenho certeza que são números
    while (fgets(line, 100, file))
    {
      cont=cont+atoi(line);

    }
    fclose(file);
    printf("somatorio das linhas é %d\n", cont);


    return 0;
}
