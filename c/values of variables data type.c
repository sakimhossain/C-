#include<stdio.h>

int main()
{
    int num;
    float amt;
    char code;
    double pi;
    long int population_of_india;
    char msg[10];
    printf("\n enter the value of num:");
    scanf("%d",&num);
    printf("\n enter the value of amt:");
    scanf("%d",&amt);
    printf("\n enter the value of code:");
    scanf("%d",&code);
    printf("\n enter the value of pi:");
    scanf("%d",&pi);
    printf("\n enter the value of population of india:");
    scanf("%d",&population_of_india);
    printf("\n enter the value of msg:");
    scanf("%d",&msg);
    printf("\n num = %d \n amt =%f \n code = %c \n pi =%e \n population of india = %1d \n msg = %s",num,amt,code,pi,population_of_india,msg);
    return 0;
}
