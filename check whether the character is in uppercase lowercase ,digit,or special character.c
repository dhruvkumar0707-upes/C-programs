#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character:");
    scanf(" %c", &a);
    if(a>='A' && a<='Z')
    {
        printf("The character is uppercase");
    }
    else if(a>='a' && a<='z')
    {
        printf("The character is lowercase");
    }
    else if(a>='0' && a<='9')
    {
        printf("The character is digit");
    }
    else
    {
        printf("The character is special character");
    }   
    return 0;
}