
    #include <stdio.h>
    #include <string.h>
    
    int main()
    {
    
    int *ptr, i;
    int array[]={1, 2, 3, 4, 5};
    ptr=array;
    for(i=0;i<sizeof(array)/sizeof(array[0]);i++){
        printf("elemento [%d] apontado pelo ptr: %d\n", i, *ptr);
        ptr++;
    }

    return 0;
            }


    