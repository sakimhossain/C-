#include<stdio.h>

int main()
{
    int i,j,k,n=9;
//    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
        printf(" ");
        }
        for(k=1;k<=i*2-1;k++){
            printf("*");
        }
        printf("\n");
    }


}
