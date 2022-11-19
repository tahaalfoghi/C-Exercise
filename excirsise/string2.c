#include <stdio.h>
#include <string.h>
// برنامج لايجاد عدد تكرارات حرف في سلسلة نصية
int main()
{
    char x[40],y;
    int i,n,a=0;
    printf("Enter your string:\n");
    gets(x);
    printf("Enter your letter:\n");
    scanf("%c",&y);
    n=strlen(x);
    for(i=0; i<n; i++)
    {
        if(x[i]==y)
        a++;
    }
    if(a!=0)
    printf("yes %c repeted %d times ",y,a);
    else 
    printf("No");
    
}