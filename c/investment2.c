#include<stdio.h>
#define PRINCIPAL 5000.00

int main()

{
    int year,rate;
    float amount,PERIOD,value,inrate;
    scanf("%f",&amount);
    scanf("%f",&PERIOD);
    scanf("%d",&rate);
    inrate = rate;
    year = 0;
    while(year <= PERIOD)
    {
        printf("%2d  %8.2f\n",year,amount);
        value = amount + inrate * amount;
        year = year+1;
        amount = value;
      }
}
