#include<stdio.h>
#include<conio.h>
void main(void)
{
    int a,b,c;
    float x;
    printf("enter the first value:");
    scanf("%d",&a);
    printf("enter the second value:");
    scanf("%d",&b);
    printf("enter the third value:");
    scanf("%d",&c);
    x = a / (b-c);
    printf("x = %.2f",x);
    return 0;
}
