#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    a=0;
    b=1;
    c=0;
    printf("Fibonacci n: \n");
    for(i=1;i<=n;i++)
    {
        a=b;
        b=c;
        c=a+b;
        printf("%d\n",c);
    }

}
