#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    float x;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    x = a/(b-c);
    printf("x= %.2f",x);
    return 0;

}
