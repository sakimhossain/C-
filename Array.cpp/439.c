#include<stdio.h>
int arr[3];

int main()
{
    int i,j,n;
        scanf("%d",&n);
        while(n%10!=0)
        {
            int r=n%10;
            arr[i]=r;
            i++;
            n=n/10;
        }
    arr[i]=n;
    for(j=i;j>=0;j--){
        printf("%d",arr[i]);
    }
    return 0;
}
