#include<stdio.h>
int main()
{
    int per;
    printf("Enter Your Percentage;");
    scanf("%d",&per);
    if(per>=90)
    {
        printf("GRADE A");
    }
            else if(per>=80)
            {
            printf("GRADE B");
            }
            else if(per>=70)
            {
            printf("GRADE C");
            }
            else if(per>=60)
            {
            printf("GRADE D");
            }
            else if(per<=40)
            {
            printf("GRADE F");
            }
                    return 0;
                    
}