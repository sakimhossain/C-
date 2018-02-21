#include<stdio.h>
int main()
{
    FILE *create;
    create=fopen("create.txt","w+");
    fclose(create);
}
