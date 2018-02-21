#include<stdio.h>
int fact(int n);
int main()
{
    int n,r;
    scanf("%d",&n);
    r=fact(n);
    printf("%d",r);
}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
