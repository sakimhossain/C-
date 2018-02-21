#include<stdio.h>
int main()
{
    int n,sum,i;
    scanf("%d",&n);

    sum = 1;
    for(i=n; i>0; i--){
        sum = sum*i;
    }
    printf("%d",sum);
    return 0;
}
