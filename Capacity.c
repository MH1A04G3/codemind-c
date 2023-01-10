#include<stdio.h>
int main()
{
  int s,t,b,kb,c;
  scanf("%d%d%d",&s,&t,&b);
  c=2*t*s*b*512;
  kb=c/1024;
  printf("%d KB",kb);
}