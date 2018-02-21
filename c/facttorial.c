/*using loop*/
#include<stdio.h>
int main(){
  int i,f=1,num;

  printf("Enter a number: ");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
      f=f*i;

  printf("Factorial of %d is: %d",num,f);
  return 0;
}


/*using pointer*/
#include<stdio.h>

void findFactorial(int,int *);
int main(){
  int i,factorial,num;

  printf("Enter a number: ");
  scanf("%d",&num);

  findFactorial(num,&factorial);
  printf("Factorial of %d is: %d",num,*factorial);

  return 0;
}

void findFactorial(int num,int *factorial){
    int i;

    *factorial =1;

    for(i=1;i<=num;i++)
      *factorial=*factorial*i;
}


/**
using function
**/

#include<stdio.h>

int findFactorial(int);
int main(){
  int i,factorial,num;

  printf("Enter a number: ");
  scanf("%d",&num);

  factorial = findFactorial(num);
  printf("Factorial of %d is: %d",num,factorial);

  return 0;
}

int findFactorial(int num){
    int i,f=1;

    for(i=1;i<=num;i++)
      f=f*i;

     return f;
}



/*
usinng recursion
*/

#include <stdio.h>

int factorial(int);

int main()
{
    int num;
    int result;

    printf("Enter a number to find it's Factorial: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Factorial of negative number not possible\n");
    }
    else
    {
        result = factorial(num);
        printf("The Factorial of %d is %d.\n", num, result);
    }
    return 0;
}
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return(num * factorial(num - 1));
    }
}
