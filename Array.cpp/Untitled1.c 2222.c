#include<stdio.h>
int main()
{
    int a=5,b=6;
    a=a+b;
    a=a-b;
    b=a+b;
    b=b-a;
    printf("a=%d b=%d",a,b);
    return 0;
}
