#include<stdio.h>
int main()
{
    float num1,result1;

    printf("Enter an amount:");
    scanf("%f",&num1);

    result1=num1*1.05;

    printf("with tax added:%.2f",result1);

    return 0;
}