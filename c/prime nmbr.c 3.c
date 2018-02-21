#include<stdio.h>

int main()
{
    int i,j,n=100,flag;
    for(i=2;i<=n;i++)
    {
        flag=0;
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                printf("not prime");
            }
            else
                printf("prime");

            return 0;
        }
    }
}
