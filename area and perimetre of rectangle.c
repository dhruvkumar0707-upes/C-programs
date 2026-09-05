#include<stdio.h>
int main()
{
    int L,B,area,perimetre;
    printf("Enter the length and breadth of rectangle:");
    scanf("%d %d",&L,&B);
    area=L*B;
    perimetre=2*(L+B);
    printf("Area of rectangle is %d",area);
    printf("\nPerimeter of rectangle is %d",perimetre);
    return 0;
}