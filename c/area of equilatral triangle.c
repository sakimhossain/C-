#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    float area;
    printf("enter the length triangle:\n");
    scanf("%d",&a);

    area = pow(a,2)*sqrt (3)/4;
    printf("\n the area of triangle:%f\n",area);
    return 0;
}
