#include<stdio.h>
int main()
{
    int i,min,max;
    scanf("%d%d",&min,&max);
    for(i=max;i>=min;i--)
    {
        printf("%d ",i);
    }
}