//even odd using bitwise
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number-");
    scanf("%d",&x);
    (x&1)? printf("%d is 0dd",x):printf("%d is even ",x);
    getch();
    return 0;

}

