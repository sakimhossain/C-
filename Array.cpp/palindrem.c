#include<stdio.h>

int main()
{
    char str[50];
    char palindrom[50];
    int i,j;
    gets(palindrom);
    for(i=0,j=2,i<50;i++;j--){
        palindrom[i]=str[j];
    }
    for(i=0;i<50;i++){
        if(str[i]==palindrom[i])
            printf("palindrom");
        else
            printf("not palindrom");
    }
    return 0;
}
