#include <stdio.h>

int main()
{
    int arr[50],i,j,k,size;

    printf("size: ");
    scanf("%d", &size);

    printf("elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k=j; k<size; k++)
                {
                    arr[k] = arr[k + 1];
                }

                size--;

                j--;
            }
        }
    }

    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
