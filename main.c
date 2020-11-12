#include<stdio.h>
#include"myMath.h"

int main(){
double x=0;
printf("\n ‫‪Please insert a real number:");
scanf("%lf",&x);

float m7 =  sub(add(Exponent(x),Power(x,3)),2);
printf("\n The value of f(x) = e^x+x^3-2 at the point %lf is: %0.4lf ",x,m7);

float m8 = add(mul(x,3),mul(Power(x,2),2));
printf("\n The value of f(x) = 3x+2x^2 the point %lf is: %0.4lf",x,m8);

float m9 = sub(div(mul(Power(x,3),4),5),mul(x,2));
printf("\n The value of f(x) = (4x^3)/5-2x at the point %lf is: %0.4lf\n",x,m9);
}