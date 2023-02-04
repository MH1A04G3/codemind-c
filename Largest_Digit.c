#include<stdio.h>
int main()
{
    int n,r,s,max=-9999;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        if(r>max)
        {
            max=r;
        }
    }
    printf("%d",max);
}