#include <stdio.h>
// sum by function , avg global variable , max with pointer
float Avg;
float Func(float array[],int n,float *p)
{
  int i;
  float sum=0;
  *p=array[0];
  sum+=array[0];
  for(i=1; i<n; i++)
  {
    sum+=array[i];
    if(array[i] > *p)
    *p=array[i];
  }
  Avg=sum/n;
  return sum;
}
int main()
{
  int i,n;
  printf("Enter n value:\n");
  scanf("%d",&n);
  float sum,max,array[n];
  printf("Enter array element:\n");
  for(i=0; i<n; i++)
  scanf("%f",&array[i]);
  sum=Func(array,n,&max);
  printf("sum=%.2f Avg=%.2f max=%.2f",sum,Avg,max);
}