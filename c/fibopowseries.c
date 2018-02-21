#include<stdio.h>

long factorial(int);
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        sum= sum+i;
    }
     printf("%d",sum);
     return 0;

}
long factorial(int n)
{
   int c;
   long result = 1;

   for( c = 1 ; c <= n ; c++ )
         result = result*c;

   return ( result );
}
