#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5},i;
    reverse(arr);
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }
}
void reverse(int *b)
{
    int c[5],i;
    for(i=0;i<5;i++){
        c[i]=*b;
        b++;
    }
    b--;
    for(i=0;i<5;i++){
        *b=c[i];
        b--;
    }
}
