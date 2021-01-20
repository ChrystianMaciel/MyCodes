#include <stdio.h>
#include <math.h>
int main(){
float a = 3, b = 5, c = 4;
float p;
float area;

scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);

p = (a + b + c) / 2;
area = sqrt(p * (p - a) * (p - b) * (p - c));

printf("%.2f\n", area);

return 0;

}