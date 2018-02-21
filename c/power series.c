#include<stdio.h>
#define ACCURACY 0.0001

main()
{
    int n,count;
    float x,sum,term;
    printf("enter value of x:");
    scanf("%f",&x);
    n=sum=term=count=1;
    while(n<=100)
    {
        term = term*x/n;
        sum =sum+term;
        count = count + 1;
        if (term<ACCURACY)
            n = 999;
        else
            n = n+1;
    }
    printf("terms = %d sum = %f\n",count,sum);

}
