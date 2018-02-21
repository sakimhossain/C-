#include<stdio.h>
int main()
{
 int i,n=100,flag;

for( i=1;i<=sqrt(n);i++){
    flag=0;
    if (n%i==0)
        flag ++;
}
if (flag>1){
    printf("not prime");
}
else{
    printf("prime");
}
}
