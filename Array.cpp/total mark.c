#include<stdio.h>
int main()
{
    int first_mark=80,second_mark=74,third_mark=97;
    double total_mark;

    ///scanf("%d %d %d",&first_mark,&second_mark,&third_mark);

    total_mark = first_mark / 4.0 + second_mark / 4.0 + third_mark / 2.0;
    printf("%lf",total_mark);

    return 0;

}
