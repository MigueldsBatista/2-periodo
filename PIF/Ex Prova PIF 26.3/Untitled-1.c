#include<stdio.h>    
#include<stdlib.h> 

/* Codigo exemplo extraido do Tutorials point - https://bit.ly/3pGG9Iw */

int main(){  
  int matrizA[10][10],matrizB[10][10],result[10][10],row,colum,i,j,k;    
  system("clear");  //limpar o console
  printf("enter the number of rows: ");    
  scanf("%d",&row);
  
  printf("enter the number of columns: ");    
  scanf("%d",&colum);   
  
  printf("enter the first matrix elements \n");    
  for(i=0;i<row;i++){    
    for(j=0;j<colum;j++){    
      scanf("%d",&matrizA[i][j]); 
      } 
    }    
  
  printf("enter the second matrix elements \n");    
  for(i=0;i<row;i++){    
    for(j=0;j<colum;j++){    
      scanf("%d",&matrizB[i][j]); 
      } 
    }    
    
  printf("multiply of the matrix=\n");    
  for(i=0;i<row;i++){    
    for(j=0;j<colum;j++) {    
      result[i][j]=0;// cada elemento da matriz produto eh o somatorio dos produtos dos elementos das demais matrizes
        for(k=0;k<colum;k++){    
          result[i][j]+=matrizA[i][k]*matrizB[k][j];
        }    
     }    
}    
//for printing result    
  for(i=0;i<row;i++){    
    for(j=0;j<colum;j++){    
      printf("%d\t",result[i][j]);    
      }    
    printf("\n");    
} 
  
return 0;  
}  