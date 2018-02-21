#include<stdio.h>
void evenshow(int a[]);
int main()
{
    int a[]={1,2,3,4,5};
    evenshow(a);
}
void evenshow(int a[])
{
    int i;
    for(i=0;i<5;i++){
        if(a[i]%2==0){

        }
        printf("\n%d",a[i]);
    }

    return 0;
}
