#include <stdio.h>
// ايجاد عدد في مصفوفة 
// linear search
int main()
{
    int i,j,a=0,x;
    int array[5][5];
    printf("Enter x value:\n");
    scanf("%d",&x);
    printf("Enter your array elements:\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(array[i][j]==x)
            {
            printf("x is found in position [%d][%d]\n",i,j);
            a++;
            }
        }
    }
    if(a==0)
    printf("x is not found in your array");
}