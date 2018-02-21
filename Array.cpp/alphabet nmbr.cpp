#include<stdio.h>
char alphabet[26];
int main()
{
    for (int i=0;i<26;i++)
    {
        scanf("%f",&alphabet[i]);
    }
    for(int i=0;i<26;i++)
    {
        printf("%f",alphabet[i]);
    }
    return 0;
}
