/* C Program - Fahrenheit to Centigrade Conversion */

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float fah, cel;
	printf("Enter temperature in Fahrenheit : ");
	scanf("%f",&fah);
	cel=(fah-32) / 1.8;
	printf("Temperature in Celsius = %f",cel);
	getch();
}
