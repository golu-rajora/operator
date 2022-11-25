//wap to check number last two bits set are not
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number-");
    scanf("%d",&x);
     (x&3==3)? printf("last two bits is set"):printf("last two bits is  not set");
    getch();
    return 0;
}

