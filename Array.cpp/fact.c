#include<stdio.h>
int main()
{

    int arr[]={5,9,4,7,3};
    int i,j,fact;
    for(i=0;i<5;i++){
        fact = 1;
        for(j=1;j<=arr[i];j++){
            fact = fact *j;
        }
        printf("Factorial %d \n",fact);
    }
}
