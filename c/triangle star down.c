#include<stdio.h>

int main()
{
    int i,j,k,n=4;
//    scanf("%d",&n);
    for(i=1;i<4;i++)
        {
        for(j=4-1;j>0;j--)
        printf(" ");
        }
        for(k=1;k<i*2-1;k++){
            printf("*");
        }
        printf("\n");

}
