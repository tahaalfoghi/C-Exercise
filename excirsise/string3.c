#include <stdio.h>
#include <string.h>
//word read from right to left and left to right
int main()
{
    int i,j,n,a=0;
    char str[30];
    printf("Enter string:\n");
    gets(str);
    n=strlen(str)-1;
    j=n-1;
    for(i=0; i<=n/2; i++)
    {
        if(str[i]!=str[j-i])
        {
        a++;
        break;
        }
    }
    if(a==0)
    printf("yes palindrom");
    else
    printf("no");
}
