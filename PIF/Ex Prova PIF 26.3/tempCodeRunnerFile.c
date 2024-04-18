#include <stdio.h>
#include <string.h>

int main()
{
    char array[3][100], temp[100];
    int i, j;

    printf("Digite 3 strings:\n");
    for (i = 0; i < 3; i++)
    {
        fgets(array[i], 100, stdin);

    }
    for (i = 0; i < 3; i++)
    {
        array[i][strlen(array[i]) - 1] = '\0';
    }


    for (i=0;i<2;i++){
        for (j = 0; j < 2; j++)
            {
            
            if (strcmp(array[j], array[j + 1]) > 0)
            {
                strcpy(temp, array[j]);
                strcpy(array[j], array[j + 1]);
                strcpy(array[j + 1], temp);
            }
            
    }

}
    
printf("\nStrings organizadas em ordem alfabetica\n");
for (i = 0; i < 3; i++)
{
    puts(array[i]);
}
return 0;
}
