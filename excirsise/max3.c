#include <stdio.h>
//  ادخال مصفوفة من 10 قيم وايجاد اكبر 3 قيم
int main()
{
  int i;
  float Array[10],max_val1,max_val2,max_val3,var;
  printf("Enter your array:\n");
  for(i=0; i<10; i++)
  {
    scanf("%f",&Array[i]);
  }
  max_val1=Array[0];
  max_val2=Array[1];
  max_val3=Array[2];
  if(max_val1 < max_val2)
  {
    var=max_val1;
    max_val1=max_val2;
    max_val2=var;
  }
  else 
  if(max_val1 < max_val3)
  {
    var=max_val1;
    max_val1=max_val3;
    max_val3=var;
  }
  for(i=3; i<10; i++)
  {
    if(Array[i] > max_val1)
    {
      max_val3=max_val2;
      max_val2=max_val1;
      max_val1=Array[i];
    }
    else 
    if(Array[i] > max_val2)
    {
    max_val2=max_val3;
    max_val2=Array[i];
    }
    else 
    if(Array[i]>max_val3)
    max_val3=Array[i];
  }
  printf(" first max value=%.2f\t second max value=%.2f\t third max value=%.2f",max_val1,max_val2,max_val3);
}
