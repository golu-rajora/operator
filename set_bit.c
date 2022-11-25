//wap of the given number 3nd bit set
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number-");
    scanf("%d",&x);
    printf("the given number %d of the 3nd bit is set then result is - %d",x,x|4);
    getch();
    return 0;
}
