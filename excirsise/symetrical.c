#include <stdio.h>
// برنامج لمعرفة هل المصفوفة متماثلة ام لا
int main()
{
  int i,j,a=0;
  float A[3][3];
  printf("Enter elements:\n");
  for(i=0; i<3; i++)
   {
    for(j=0; j<3; j++)
    {
      scanf("%f",&A[i][j]);
    }
   }
   for(i=0; i<3; i++)
   {
    for(j=0; j<3; j++)
    {
      if(A[i][j]!=A[j][i])
      {
      a++;
      break;
      }
    }
   }
   if(a==0)
   printf("symerical array");
   else 
   printf("its not symetrical");

   return 0;
}
