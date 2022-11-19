#include <stdio.h>
// found average and two max value using pointer and function
float found(float A[],int n,float *p,float *x)
{
    int i;
    float sum=0;
    sum+=A[0]+A[1];
    *p=A[0]; 
    *x=A[1];
    for(i=2; i<n; i++)
     {
        sum+=A[i];
        if(A[i]>*p)
        {
            *x=*p;
            *p=A[i];
        }
        else 
        if(A[i]>*x)
        {
            *x=A[i];
        }
     }
     return sum;
}
int main()
{
    int i,n;
    printf("Enter n value:\n");
    scanf("%d",&n);
    float sum,A[n],max,max2;
    printf("Enter your elements:\n");
    for(i=0; i<n; i++)
     scanf("%f",&A[i]);
     sum=found(A,n,&max,&max2);
     printf("sum=%.2f  max=%.2f  max2=%.2f",sum,max,max2);

}