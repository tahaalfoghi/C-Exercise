#include <stdio.h>
// ادخال مصفوفة وايجاد اكبر واصغر قيمة عن طريق الدوال وترتيبها تنازليا
void fun(float [],int);

int main()
{
    int i,n;
    printf("Enter n value:\n");
    scanf("%d",&n);
    float A[n],max;
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
      scanf("%f",&A[i]);
      fun(A,n);
      
     
}
void fun(float A[],int n)
{
    int i,j;
    
    float max,min,temp;
    max=min=A[0];
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(A[i]<A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
      for(i=1; i<n; i++)
      {
         if(A[i]>max)
         max=A[i];
         else 
         if(A[i]<min)
         min=A[i];
      }
      printf("Array after sort:\n");
      for(i=0; i<n; i++)
       printf("%.2f\t",A[i]);

       printf("max=%.2f  min=%.2f",max,min);
}