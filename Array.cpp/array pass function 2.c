#include <stdio.h>
void pass(int a)
{
    printf("%d", a);
}

int main()
{
    int array[] = { 2, 3, 4 };
    pass(array[2]);
    return 0;
}
