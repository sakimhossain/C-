#include<stdio.h>
int tower(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int r=tower(n);
    printf("%d",n);
}
int tower(int n)
{
    if(n==1)
        return 1;
    else
        return 2*tower(n-1)+1;
}
