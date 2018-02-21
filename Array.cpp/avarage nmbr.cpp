/// mark 5 student avarage nmbr ///
#include<stdio.h>
float mark[5];
int main()
{
    float sum=0;
    for(int i=0;i<5;i++)
    {
        scanf("%f",&mark[i]);
        sum=sum+mark[i];
    }
    printf("%f",sum/5);

}
