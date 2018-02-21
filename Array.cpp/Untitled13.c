#include<stdio.h>
int main()
{
    int arr1[5]={1,2,3,4,5},arr2[5],i;
    for(i=0;i<5;i++){
        arr2[i]=arr1[4-1];
    }
    printf("%d",arr2[i]);
}
