#include<stdio.h>
void sum(int a,int b);

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    a=10;
    b=5;
    sum=(a+b);
}
void sum(int a,int b)
{
    printf("%d %d",a,b);
    return 0;
}
