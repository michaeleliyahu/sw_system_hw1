#include<stdio.h>
#include"myMath.h"

double Exponent(int x){
    double e = 2.71828;
    int m = x;
    double temp = 1;
    if (x<0)
    {
        m = -x;
        e = 1/2.71828;
      //  printf("%d",m);
    }
    
    for (int i =0; i < m; i++)
    {
       temp = temp*e;
       
    }
   // printf("%f",temp);
    
    return temp ;
}

double Power(double x, int y){
    double temp =1;
    for (int i = 0; i < y; i++)
    {
        temp = temp * x;
    }
    return temp;
}