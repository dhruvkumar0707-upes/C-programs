#include<stdio.h>
int main()
{
    float si,ci,p,r,t;
    printf("Enter the principal amount:");
    scanf("%f",&p);
    printf("Enter the interest rate:");
    scanf("%f",&r);
    printf("Enter the time period in years:");
    scanf("%f",&t);
    si=(p*r*t)/100;
    ci=p*pow(1+r/100,t)-p;
    printf("Simple Interest is=%f",si);
    printf("\nCompound Interest is=%f",ci);
    return 0;
}