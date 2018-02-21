#include<stdio.h>

int main()
{
    int i,j,k,n=4;
   /// scanf("%d",&n);

    for(int i=0;i<4;i++)
    {
        for(int j=4-1; j>0; j--)
            printf(" ");
    }

    for (int k=0;k<i*2-1;k++){
        printf("*");
    }
    printf("\n");
}
