// find the 2nd bit of the given number

#include<stdio.h>
int main()
{
    int x;
    printf("enter a number-");
    scanf("%d",&x);
    (x&2)?printf("2nd bit of the given number is - 1"):printf("2nd bit of the given number is - 0");
    getch();
    return 0;

}
