#include<stdio.h>
int factorial(int n);
int main(){
    int n,fact;
    scanf("%d",&n);
    fact = factorial(n);
    printf("%d",fact);

return 0;
}

int factorial(int n){
    if(n == 1)
        return 1;
    else
        return n * factorial(n - 1);

}
