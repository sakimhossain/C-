#include<stdio.h>
int main(){

int unit;
float charge;
scanf("%d",&unit);
if(unit<=200){
    charge = unit * 0.50;
    printf("bill is : %f",charge);

}else if (unit > 200 && unit <=400){

    charge = 100 +  0.65 *(unit-200);
    printf("bill is : %f",charge);
} else if(unit>400 && unit<=600){

    charge = 230+  0.80 *(unit-400);
    printf("bill is : %f",charge);

} else{

    charge = 390+1.00 * (unit - 600);
    printf("bill is : %f",charge);


}

return 0;
}
