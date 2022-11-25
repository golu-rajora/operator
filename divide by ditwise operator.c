//divide the given number by 32 without using divide operator
#include<stdio.h>
int main()
{
    printf("the given number is - 32\n");
    int x;
    printf("enter a divided number-");
    scanf("%d",&x);
    printf("then result is-%d",x>>5);
    getch();
    return 0;
}

