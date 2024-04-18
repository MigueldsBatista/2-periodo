#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i = 0;
    char string[100], ch;
    while ((ch=getchar())!= '\n'&&i<99)
    {

        string[i] = ch;
        i++;
        
    }string[i]='\0';

    for (i = 0; i < strlen(string); i++)
    {
    ch=string[i];
        if (ch >= 'A' && ch <= 'Z')
        {
        (string[i]=ch + 'a' - 'A'); // distancia de um caractere ate sua versão min
        }    
        
    }
        
        printf("string to lower: %s", string);
        return 0;
}