#include<stdio.h>

int main() {
   float radius, area;

   printf("\nradius of Circle : ");
   scanf("%f", &radius);

   area = 3.14 * radius * radius;
   printf("\n%f", area);

   return (0);
}
