#include<stdio.h>
int main()
{
    int i,j,count=0,n;
    for(i=2;i<=n;i++){
            int flag=0;
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
            printf("not prime");
            flag++;
            break;
        }
    }
    if(flag==0){
        printf("prime");
        count++;
        return 0;
    }
}
}

