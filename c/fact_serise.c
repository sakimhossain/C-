#include<stdio.h>
int main()
{
    int n,sum,result,i,j;
    scanf("%d",&n);

    int fact(number){
        sum = 1;
        for(i=number; i>0; i--){
            sum = sum*i;
        }
        return sum;
    }

    for(j=1;j<=n;j++){
        result= fact(j);
        result += j;

    }
    printf("%d",result);


    return 0;
}
