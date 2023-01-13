#include<stdio.h>
int main()
{
    float num1,num2,num;
    float avg;
    scanf("%f%f",&num1,&num2);
    num=num1+num2;
    avg=num/2;
    printf("Average of %.f and %.f is: %.2f",num1,num2,avg);
    
}