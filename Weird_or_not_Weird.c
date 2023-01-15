#include<stdio.h>
int main()
{
    int n,a=2,b=6;
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("weird");
    }
    else if(n%2==0&&a<=5)
    {
        printf("not weird");
    }
    else if(n%2==0&&a<=20)
    {
        printf("weird");
    }
    else if(n%2==0&&a>=20);
}