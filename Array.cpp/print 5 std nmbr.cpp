#include<stdio.h>
float mark[5];
int main()
{
    float mark[5];
    ///mark[5]={50,60,70,80,90};
    for(int i=0;i<5;i++)
    {
        scanf("%f",&mark[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("\n%f",mark[i]);
    }
    return 0;
}
