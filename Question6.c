//WAP to print the name of the user in double quotes.

#include<stdio.h>
int main()
{
    char a[90];
    printf("Enter your name:-");
    scanf("%s ",&a);
    printf("\"Hello , %s \"",a);
    printf("\n");
    return 0;
}