#include<stdio.h>

main()
{
    int i,j,k;
///    scanf("%d",&n);

    for(i=1;i<=7;i++){
        for(j=i;j<7;j++){
            printf(" ");
        }
     for(k=1;k<(i*2);k++)
    {
        printf("*");
    }
    printf("\n");
    }

}



