//Arquivo de testes para saber como criar bibliotecas em c

#include <stdio.h>
#include "mblib.h"

int potencia(int n1, int n2)//A elevado n1 B
{   
    int c=1;
    for(int i=0;i<n2;i++){
        c=c*n1;
    }
    return c;
}
