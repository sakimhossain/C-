#include<stdio.h>
main()
{
    int i,j,count=0,flag,n=100;
    for(i=2;i<=n;i++){
        flag=0;
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                printf("not prime");
                flag++;
                break;
            }
        }
        if (flag=0){
            printf("prime");
            count++;
        }
    }
}

