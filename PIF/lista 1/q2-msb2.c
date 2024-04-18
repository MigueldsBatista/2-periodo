#include <stdio.h>

int main()
{
    int i, j, caso;
    double sum=0, media=0;
    int matriz[12][12];
    scanf(" %c", &caso);
    
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%d", &matriz[i][j]);
            if (j>i)
            {
                sum=sum+matriz[i][j];
            }
            
        }
    }
    media=sum/66;
    if(caso=='M'){
        printf("%.1lf\n", media);

    }
    else if(caso=='S'){
        printf("%.1lf\n", sum);
    }
    return 0;
}
