#include<stdio.h>
main()
{
    int i,j,sum=0;
    for(i=2;i<=100;i++){
            int flag=0;
        for(j=2;j<sqrt(i);j++){
            if(i%j==0){
                printf("not prime:");
                flag++;
                break;
            }
        }
        if(flag==0){
            printf("prime:");
            sum=sum+i;
        }
    }
}
