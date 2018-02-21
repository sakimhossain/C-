#include<stdio.h>

int main()
{
    char alphabet[26];///={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int i;
    for(i=1;i<=26;i++){
        scanf("%c",&alphabet[i]);
        printf("%c",alphabet[i]);
    }
    return 0;
}
