#include<stdio.h>

main()
{
    int x,sum,fact,n,i;
    scanf("%d  %d",&x,&n);

    for(i=1,i<=n,i++)
        fact = fact * i;
    for(i=1,i<=n,i++)
        {
            sum=sum+pow(x,i)/fact;

        }
          printf("sum= %d",sum);
}
