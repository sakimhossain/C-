#include<stdio.h>
int prime(int n);
int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
}
int prime(int n)
{
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            printf("not prime");
        }
        else(i>sqrt(n)){
            printf("prime");
        }
    }
}
