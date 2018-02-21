#include<stdio.h>
void main()
{
    FILE *line;
    line= fopen("test.txt","r");
    line=fopen("c\\document\\test.txt","w");
    char c;
    while(1)
    {
        c=fgetchar("ilne");
        if(c==EOF)
            break;
        printf("%c",c);

    }
}
