#include<stdio.h>
int main()
{
    int r,area,perimetre;
    printf("Enter length of rectangle: ");
    scanf("%d",&r);
    area=3.14*r*r;
    perimetre=2*3.14*r;
    printf("Area of rectangle is %d",area);
    printf("\nPerimeter of rectangle is %d",perimetre);
    return 0;
}