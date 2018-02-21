#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},i;
    reverse(a);
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
}
void reverse(int *b)
{
    int i,c[5];
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
