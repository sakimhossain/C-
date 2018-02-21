#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
   int i, lenth;

    gets(str);
    lenth=strlen(str);
    for(i=lenth-1; i<=0; i--){
        if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u')

        printf("%c are vowel\na",str[i]);

    }





return 0;
}
