#include<stdio.h>
int main()
{
    int l,r,k,a=0;
    scanf("%d%d%d",&l,&r,&k);
    for(l;l<=r;l++)
    {
        if(l%k==0)
        {
            a++;
        }
    }
    printf("%d",a);
}