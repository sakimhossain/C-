/* this progem is mathmatical term*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,x,result;
    printf("enter the value as A:");
    scanf("%d",&a);
    printf("enter the value as X:");
    scanf("%d",&b);
    printf("enter the value as B:");
    scanf("%d",&c);
    printf("enter the value as C:");
    scanf("%d",&x);
    result=(a*(x*x)+(b*x)+c);
    printf("a(x*x)+(b*x)+c = %d",result);
    return 0;

}
