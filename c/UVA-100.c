#include<stdio.h>
int main()
{

    int i,j,a,l,m,n;
    scanf("%d%d",&i,&j);
    for(a=i;i>j;a++)
    {

        if(a==1)
        {
            break;
        }
        else
        {
            if(a%2 == 0)
            {
                a=a/2;
            }
            else
            {
                a=3*a+1;
            }
        }
        printf("%d %d",i,j);
    }

    return 0;
}
