#include<stdio.h>
#include<string.h>
int main(){
    int count,i;
    char str[20];
    gets(str);
    for(i=0;i<20;i++){
        if(str[i]>=65 && str[i]<=89){
            str[i]=str[i]-32;
        }
    }
    printf("%s",str);
    return 0;
}
