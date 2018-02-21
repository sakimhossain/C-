#include<stdio.h>

int main()
{
    int i,j,k,n=3;
//    scanf("%d",&n);
    for(i=0;i<=3;i++){
        for(j=3-1;j>0;j--){
        printf(" ");
        }
        for(k=0;k<i*2+1;k++){
            printf("*");
        }
        printf("\n");
    }


}
