#include <stdio.h>


int main(void){
    FILE *file;
    file=fopen("arquivo.txt", "w");// write (w) read(r)
    //vai escrever no arquivo file print format
    fprintf(file, "Hello World!");
    fclose(file);

    


    



    return 0;
}