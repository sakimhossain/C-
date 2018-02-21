#include<stdio.h>
void rev(int arr[]);
int main()
{
    int arr[5]={1,2,3,4,5};
    rev(arr);
    return 0;
}

void rev(int arr[]){
    int i,arr2[5];

    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<5;i++){
        arr2[i] = arr[4-i];
            printf("%d ",arr2[i]);
    }
}
