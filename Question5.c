//Q5.WAP to calculate the length of String using printf function

#include<stdio.h>
#include <string.h>
int main()
{
    char a[20];
    int i;
    printf(" Enter the string :- \n");
    gets(a);
    i = strlen(a);
    printf(" the length of string is = %d \n ", i);
    return 0;
}
