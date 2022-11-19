#include <stdio.h>
// Enter array and find the prime numbers and store it in another array
// prime numbers like:- 1,7,11,13   عدد لا يقبل القسمة الا عى نفسه والواحد  
int main()
{
  int i,n,j,a,A[6],B[6],b=0;
  printf("Enter array:\n");
  for(i=0; i<6; i++)
    scanf("%d",&A[i]);

    for(i=0; i<6; i++)
    {
    // a=0 counter for every element in the array
        a=0;
        for(j=2; j<n; j++)
        {
            if(A[i]%j==0)
            {
                a++;
                break;
            }
        }
        if(a==0)
         B[b++]=A[i];
    }
    printf("original array:\n");
    for(i=0; i<6; i++)
        printf("%d ",A[i]);
    printf("\n");
     printf("prime number array array:\n");
    for(i=0; i<b; i++)
        printf("%d ",B[i]);
}