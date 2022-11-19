#include <stdio.h>
 
 float SS(float A[][])
 {
    int i,j;
    float sum;
    for(i=0; i<n; i++)
    {
        sum=0;
        for(j=0; j<10; j++)
        {
            sum+=A[i][j];
        }
    }
    return sum;
 }
 float AA(float sum,int n)
 {
    float avg;
    avg=sum/n;
    return avg;
 }

int main()
{
    int i,j,n;
    float Sum,Avg;
    printf("Enter n:\n");
    scanf("%d",&n);
    float A[n][10];
    for(i=0; i<n; i++)
    {
        printf("Enter student [%d] marks:\n",i+1);
        for(j=0; j<10; j++)
        {
           scanf("%f",&A[i][j]);
        }
    }
    Sum=SS(A,n,10);
    Avg=AA(Sum,n);
    printf("sum=%.2f avg=%.2f",Sum,Avg);

    return 0;

}