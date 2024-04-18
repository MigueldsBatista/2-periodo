#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char phrase[100];
    int A, B, C, i=0;
    printf("digite uma string menor que 100 caracteres: ");
    fgets(phrase, 100, stdin);

    printf("Digite os valores de deslocamento A(right) B(left) C(right): ");
    scanf("%d %d %d", &A, &B, &C);

    while (phrase!='\0')
    {
        char ch=phrase[i];
        if(ch>='A' && ch<='Z')
        {
            ch=(ch - 'A' + A ) % 26+'A';
            ch=(ch-'A'-B+26)%26+'A';
            ch=(ch-'A'+C)%26+'A';
        }
        else if(ch>='a' && ch<='z')
        {
            ch=(ch - 'a' + A ) % 26+'a';
            ch=(ch-'a'-B+26) % 26+'a';
            ch=(ch-'a'+C) % 26+'a';
        }
        phrase[i]=ch;
        i++;
    }
    printf("String modificada: %s", phrase);

}
