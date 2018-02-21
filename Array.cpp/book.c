#include<stdio.h>
struct book{
    char name[30];
    int id;
    char author[20];
};
int main()
{
    struct book b[2];
    int i;
    for(i=0;i<2;i++){
        scanf("%s %d %s",&b[i].name,&b[i].id,&b[i].author);
    }

    printf("\n%s %d %s \n",b[0].name,b[i].id,b[i].author);
    printf("\n%s %d %s \n",b[1].name,b[i].id,b[i].author);
    return 0;
}
