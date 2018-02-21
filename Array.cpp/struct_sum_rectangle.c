#include<stdio.h>
struct rectangle{
       int a,b,c,d;

};
void add(struct rectangle *x,struct rectangle t*y,struct rectangle *z)
{
    z->a=x->a+y->a;
    z->b=x->b+y->b;
    z->c=x->c+y->c;
    z->d=x->d+y->d;
}
int main()
{
    struct rectangle t1={5,6,7,8};
    struct rectangle t2={5,6,7,8};
    struct rectangle t3;
    add(&t1,&t2,&t3);
    printf("%d %d %d %d",t3.a,t3.b,t3.c,t3.d);
    return 0;
}
