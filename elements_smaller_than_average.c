#include<stdio.h>
int main()
{
    int n,avg,a[n],i,s=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(avg>=a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}