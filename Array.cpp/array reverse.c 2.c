#include<stdio.h>
int main()
{
    int arr[5]={5,9,4,7,3},arr2[5];
    int i,j,k,n=5,res=1;
    for(i=0;i<n;i++){
        arr2[i] = arr[i];
    }
    k=0;
    for(j=5-1;j>=0;j--){
        arr[k] = arr2[j];
        k++;
    }

    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}
