#include<stdio.h>
#include<conio.h>

#define PI 3.14

main()
{
    float radius,area;

    printf("enter area of circle:\n");
    scanf("%f",&radius);

    area = PI*radius*radius;

    printf("area of circle = %0.2f \n",area);

    return 0;

}
