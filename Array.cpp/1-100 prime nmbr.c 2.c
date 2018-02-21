#include<stdio.h>
int main()
{
    int i,j,n=100;
    for(i=2;i<n;i++){
        for(j=2;j<n;j++){
            if(i%j==0)
            break;
            else if(i==j+1)
            printf("%d\n",i);
        }
    }
}
