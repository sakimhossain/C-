#include<stdio.h>
int main()
{
    int arr[5]={5,9,4,7,3};
    int i,j,n=5,res=1;
    for(i=0;i<n;i++){
        for(j=1;j<=arr[i];j++){
            res = res *j;
        }
        printf("Factorial %d is %d\n",arr[i],res);
    }

}
