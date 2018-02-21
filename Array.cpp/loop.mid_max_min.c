#include<stdio.h>
int main(){
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 if(a>b && a>c){
    printf("%d is max",a);
 } else if(b>a && b>c){
     printf("%d is max",b);
 } else if(c>a && c>b){
     printf("%d is max",c);
 } else {
     printf("The three values are equal");
 }

return 0;
}
