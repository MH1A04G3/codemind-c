#include<stdio.h>
int main()
{
    int n,rem,sum=0,square;
    scanf("%d",&n);
    square=(n*n);
    while(square!=0)
    {
        rem=square%10;
        sum=sum+rem;
        square=square/10;;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}