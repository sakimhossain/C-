#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i= 0; i <= n; i++)
    {
        if (n == i * i)
        {
            printf("YES it is perfect Square number");
            break;
        }
    }
    printf("NO it is not perfect square number");
    return 0;
}

