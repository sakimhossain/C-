#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=0;i<10;i++){
        printf("%d",a[i]);
    }
    if(a[i]%2==0){
        printf("%d even");
    }
    else{
        printf("%d odd");
    }
    printf("/n");
    return 0;
}
