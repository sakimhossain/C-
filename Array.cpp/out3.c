#include<stdio.h>
main()
{
    int m[2];
    *(m+1)=100;
    *m=*(m+1);
    printf("%d,m[0]);
}
