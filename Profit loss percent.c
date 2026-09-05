#include<stdio.h>
int main()
{
    float s,c,p,l,pr,lo;
    printf("Enter the selling price :");
    scanf("%f",&s);
    printf("Enter the cost price :");
    scanf("%f",&c);
    if(s>c)
    {
        p=s-c;
        pr=(p/c)*100;
        printf("profit =%f",p);
        printf("\nprofit percent=%f",pr);
    }
    else if(c>s)
    {
        l=c-s;
        lo=(l/c)*100;
        printf("LOSS=%f",l);
        printf("\nloss percent is=%f",lo);
    }
    else
    {
        printf("NO profit NO loss");
    }
}