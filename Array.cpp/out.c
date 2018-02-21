#include<stdio.h>
int f(char *p);
main()
{
    char str[]="ansi";
    printf("%d",f(str));

}
int f(char *p)
{
    char *q=p;
    while (*++p)
            ;
        return (p-q);
}
