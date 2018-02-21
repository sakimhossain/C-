#include<stdio.h>
main()
{
   int i,j,n=5;

for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==j){
                printf("0 ");
            }
                else{
                    printf("1 ");
            }
            printf("\n");
        }
}
}
