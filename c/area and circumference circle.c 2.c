#include<stdio.h>
#include<conio.h>

#define PI 3.14

int main()
{
    float radius;
    double area,circumference;

    printf("enter radius of circle:\n");
    scanf("%f",&radius);

    area = PI*radius*radius;
    circumference = 2*3.14*radius;

    printf(" area = % 0.4f \n",area);
    printf(" circumference = % 0.4f",circumference);

    return 0;

}
