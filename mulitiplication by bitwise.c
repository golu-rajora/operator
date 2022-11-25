//multiply the given number by 16 without using multiplication operator
#include<stdio.h>
int main()
{
    printf("the given number is - 16\n");
    int x;
    printf("enter a how many time multiply-");
    scanf("%d",&x);
    printf("then result is-%d",x<<4);
    getch();
    return 0;
}
