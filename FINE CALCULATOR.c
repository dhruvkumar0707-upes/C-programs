#include<stdio.h>
int main()
{
int a,b, sum, diff,prod,quot;
printf("Enter the first Number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
sum=a+b;
diff=a-b;
prod=a*b;
quot=a/b;
printf("\nThe sum of the numbers is=%d", sum);
printf("\nThe difference of the two numbers is=%d",diff);
printf("\nThe product of two numbers is=%d",prod);
printf("\nThe quotient is=%d",quot);
return 0;
}