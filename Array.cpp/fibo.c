#include<stdio.h>
int fibo(int n);
int main()
{
    int n,r;
    scanf("%d",&n);
    r=fibo(n);
    printf("%d",r);
}
int fibo(int n)
{
    if(n==0)
        return ;
    else if(n==1)
        return 1;
    else
        return fibo(n-1) + fibo(n-2);
}
