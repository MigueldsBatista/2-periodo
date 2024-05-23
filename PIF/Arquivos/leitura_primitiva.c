#include <stdio.h>

int main()
{
FILE *file;


file=fopen("numero.txt", "r");

if(file==NULL) printf("arquivo não encontrado"); return 0;
//variaveis pras linhas
int x, y, z;
fscanf(file, "%i %i %i", &x, &y, &z);//file scan format lê as linhas do arquivo(o arquivo precisa ja estar criado) comando muito limitantecode .

//caso eu leia um arquivo que nao existe ele printa os valores do cache em x y z / Trocar o nome do arquivo para "numeros.txt" para testar
printf("Linha 1: %i\nLinha 2: %i\nLinha 3: %i\n", x, y, z);
fclose(file);
    return 0;
}
