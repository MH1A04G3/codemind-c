#include<stdio.h>
int main()
{
    float bs,da,hra,gs;
    scanf("%f",&bs);
    if(bs<=10000)
    {
        da=bs*0.8;
        hra=bs*0.2;
        gs=bs+da+hra;
        printf("%.2f",gs);
    }
    else if(bs>10000&&bs<20000)
    {
        da=bs*0.9;
        hra=bs*0.25;
        gs=bs+hra+da;
        printf("%.2f",gs);
    }
    else
    {
        da=bs*0.95;
        hra=bs*0.3;
        gs=bs+hra+da;
        printf("%.2f",gs);
    }
}