#include<stdio.h>
int isPrime(int n);
int main()
{
    int n;
    scanf("%d",&n);
    isPrime(n);
    return 0;
}

int isPrime(int n)
{
    int i,flag=0;
    for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                flag = 1;
                break;
            }
        }
    if(flag==0)
    {
        printf("%d is prime number\n",n);
    }
    else
    {
        printf("%d is prime NOt number\n",n);
    }

}

