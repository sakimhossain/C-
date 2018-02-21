#include <stdio.h>

int main()
{
    int i, j;
    for(i=1;i<=7;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%c",'P' + j-1);
        }
        printf("\n");
    }

    return 0;
}
