#include<stdio.h>
int main()
{
    int n=3,max=0,sumOfMax,i,j,k,arr[3],arr1[3],arr2[3];

   /// scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            scanf("%d",&arr[j]);
        }
        for(k=0;k<n;k++){
            if(arr[k]>arr[k+1]){
                max = arr[k];
            } else {
            max = arr[k+1];
            }
        }
        printf("%d\n",max);



    }

    return 0;
}
