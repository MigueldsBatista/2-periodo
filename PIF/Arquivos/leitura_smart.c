#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *file;

    file=fopen("string.txt", "r");

if(!file) {
printf("nao foi possível abrir o arquivo\n");
getchar();
exit(0);
}
char frase[100];

while (fgets(frase, 100, file))//!= NULL
{
    printf("%s", frase);
}fclose(file);

    return 0;
}
