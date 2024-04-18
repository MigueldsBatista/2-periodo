// um ponteiro é um apontador de um endereço de memoria


int main()
{
    int var=15; 
    int *ptr;   // ponteiro declarado precisa de *

    ptr=&var;
    //ptr=&var;

    
    printf("CASO 1\n\n");
    printf("conteudo de var =%d\n", var);
    printf("endereço de var =%p\n", &var);//endereço da var
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("endereço apontado por p ptr=%p\n", ptr);
    printf("endereço de ptr = %p", &ptr);
            printf("\n\n");

    printf("CASO 2\n\n");
    
    printf("conteudo de var =%d\n", var);
    printf("endereço de var =%p\n", &var);//endereço da var
    printf("conteudo apontado por ptr = %d\n", *ptr);
    printf("endereço apontado por p ptr=%p\n", ptr);
    printf("endereço de ptr = %p", &ptr);

    *ptr=73;

}