#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},b[5];
    int i,j,n,k,result=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
      a[i] = b[i];
    }
    k=0;
    for(j=5-1;j>=0;j--){
        a[k]=b[j];
        k++;
    }
    for(i=1;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}
