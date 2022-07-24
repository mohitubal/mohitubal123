//WAP to take date as an input in below given format and convert the date format and display the result as given below.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the date :-");
    scanf("%d",&a);
    printf("Enter the month :-");
    scanf("%d",&b);
    printf("Enter the year :-");
    scanf("%d",&c);

    printf("Day -%d, Month - %d , Year - %d", a ,b ,c);
}