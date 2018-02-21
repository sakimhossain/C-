#include<stdio.h>
main()
{
 int *poin;
 int a = 101;
 poin = &a;
 printf("Address :%d\n",poin);
 printf("Value :%d",*poin);
}
