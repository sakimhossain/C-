#include<stdio.h>

main()
{
    int ar[]={2,4,3,5,7,6,8,10,54,67};
    int i;

    for(i=0;i<10;i++){
        if(ar[i]%2==0)
            printf("%d is even\n",ar[i]);
        else
            printf("%d is odd\n",ar[i]);
    }
}
