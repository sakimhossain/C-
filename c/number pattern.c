#include<stdio.h>
main()
{
    int i,j,k;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            for(k=1;k<=i;k++)
                printf("%d",j);
        }
        printf("\n");
    }
}
