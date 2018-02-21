/* A program between INVESTMENT PROBLEM.c */

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define principal 5000.00
#define interest .2
 main()
{
    int year,rate;
    float value, term, amount,inrate;
    printf("enter principal\n");
    scanf("%f",&amount);
    printf("enter interest rate\n");
    scanf("%d",&rate);
    printf("enter number of year\n");
    scanf("%f",&term);
    inrate =(100/rate);
    year = 0;
    while(year <=term)
    {
        printf("%2d  %8.2f\n",year,amount);
        value = amount + inrate * amount;
        year = year+1;
        amount = value;
    }
}
