#include <stdio.h>
#include <math.h>
//  S تقوم بايجاد مساحة الشكلو الدالة التانية تقوم بايجاد قيمة AAبرنامج يقوم بايجاد مساحة شكل هندسي واستخدم دالتين الدالة الاولى اسمها قانون مساحة الشكل ٍغه
// area =(s*(s-a)*(s-b)*(s-c))^0.5 
// s= (a+b+c)/28
float SS(float a,float b,float c)
{
    float S=(a+b+c)/2;
    return S;
}
float AA(float a,float b,float c,float S)
{
    float area;
    area=sqrt(S*(S-a)*(S-b)*(S-c));
    return area;
}
int main()
{
    float a,b,c,Area,S;
    printf("Enter a,b,c value:\n");
    scanf("%f%f%f",&a,&b,&c);
    S=SS(a,b,c);
    Area=AA(a,b,c,S);
    printf("Area =%.3f",Area);

    return 0;
}