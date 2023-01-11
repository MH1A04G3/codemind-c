#include<stdio.h>
int main()
{
    int y,d,w;
    scanf("%d",&d);
    y=d/365;
    w=(d%365)/7;
    printf("%d
%d",y,w);
}