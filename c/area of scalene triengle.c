#include<stdio.h>
#include<conio.h>

#define PI 3.14

int main()
{
    int S1,S2,angle;
    float area;

    printf("enter the S1:\n");
    scanf("%d",&S1);

    printf("enter the S2:\n");
    scanf("%d",&S2);

    printf("enter the angle:\n");
    scanf("%d",&angle);

    area =(S1*S2*sin(PI/180)*angle)/2;

    printf("%area of scalene triengle:\n %f",angle);

    return 0;
}
