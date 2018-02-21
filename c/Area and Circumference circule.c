#include<stdio.h>
#include<conio.h>

int main ()
{
    float radius;
    double area,circumference;
    printf("enter the radius of circule\n:");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;
    printf("area = %.21f\n",area);
    printf("circumference = %.21f",circumference);
    return 0;
}
