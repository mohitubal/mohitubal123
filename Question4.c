//Q4.WAP to find the area of the circle.Take radius of circle from user as input and print the result in below given format.

#include<stdio.h>
int main()
{
    int r;
    float A;
    printf("Enter the value of the radius of the circle r:");
    scanf("%d" ,&r);
    A = 3.14*r*r;
    printf("Area of circle is %f, having the radius  %d" ,A,r);
    return 0;
}
