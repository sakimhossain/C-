#include<stdio.h>
int main()
{

    int arr[]={5,9,4,7,3};
    int j,fact=1;

        for(j=1;j<=arr[0];j++){

            fact = fact *j;
        }
        printf("Factorial %d \n",fact);


}

