#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char para [20];
    gets(para);
    for(i=0;i<20;i++){
        if(para[i]>=64&&para[i]<=90){
            para [i]=para[i]+32;
        }
    }
    printf("\n%s",para);
    return 0;
}
