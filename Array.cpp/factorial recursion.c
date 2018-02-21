#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int r=fact(n);
    printf("%d",r);
}
int fact(int n)
{
    if(n==0||n==1){
        return 1;
        }else{
            return n*fact(n-1);
    }
}
