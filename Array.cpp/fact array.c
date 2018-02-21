#include<stdio.h>
int main()
{
    int i,j,arr[5]={2,3,4,5,6},fact;
    for(i=0;i<5;i++){
        fact=1;
        for(j=1;j<=arr[i];j++){
            fact=fact*j;
        }
        printf("\n%d %d",fact,arr[i]);
    }
}
