#include<stdio.h>
int main()
{
    int n,a[n],i,s=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s++;
        }
        else
        {
            s=0;
            printf("False");
            break;
        }
    }
    if(s>0)
    {
        printf("True");
    }
}