/**
    C program to print nth fibonacci series using  function
**/

#include<stdio.h>
int fibonacci(int n);
int main(){
    int n,fibo;
    scanf("%d",&n);
    fibonacci(n);
    ///printf("%d",fibo);

return 0;
}

int fibonacci(int n){
     int f1=0,f2=1,i,temp;
     for(i=1;i<=n;i++){
        printf("%d ",f1);
        temp = f1+f2;
        f1 = f2;
        f2 = temp;
     }
}

