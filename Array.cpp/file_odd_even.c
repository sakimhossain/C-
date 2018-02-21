#include<stdio.h>

int main(){
    int i,l[100];
FILE *number,*odd,*even;
number=fopen("number.text","a");
odd=fopen("odd.text","a");
even=fopen("even.text","a");

for(i=0;i<100;i++){
    fprintf(number,"%d",i);
}
fscanf(l,100,number);

for(i=0;i<100;i++){
    printf("%d",l[i]);
}


fclose(number);
fclose(odd);
fclose(even);
return 0;
}
