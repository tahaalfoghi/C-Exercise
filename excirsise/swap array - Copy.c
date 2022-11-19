#include <stdio.h>

int main()
{
  int i,j;
  float A[3][4],B[3][4],swap;
  printf("Enter A array:\n");
  for(i=0; i<3; i++)
   for(j=0; j<4; j++)
    scanf("%f",&A[i][j]);
    printf("Enter B array:\n");
    for(i=0; i<3; i++)
     for(j=0; j<4; j++)
      scanf("%f",&B[i][j]);

      for(i=0; i<3; i++)
      {
        for(j=0; j<4; j++)
        {
          if(i==0)
          {
            swap=A[i][j];
            A[i][j]=B[i+1][j];
            B[i+1][j]=swap;
          }
        }
      }
      for(i=0; i<3; i++)
      {
        for(j=0; j<4; j++)
        printf("%.2f\t",A[i][j]);
        printf("\n");
      }
      printf("\n");
      for(i=0; i<3; i++)
      {
        for(j=0; j<4; j++)
        printf("%.2f\t",B[i][j]);
        printf("\n");
      }
}  