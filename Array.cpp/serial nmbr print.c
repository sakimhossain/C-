#include<stdio.h>
int arr[3];
int main()
{
    int n,i,j,r;
    scanf("%d",&n);
    i=0;
    while(n%10!=0)
    {
        r=n%10;
        arr[i]=r;
        i++;
        n=n/10;
    }

    for( j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
    return 0;
}
