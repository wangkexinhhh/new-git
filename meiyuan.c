#include<stdio.h>
int main()
{
    int amount,num1,num2,num3,num4;

    printf("Enter a dollar amount:");
    scanf("%d",&amount);

    num1=amount/20;
    num2=(amount-20*num1)/10;
    num3=(amount-20*num1-10*num2)/5;
    num4=(amount-20*num1-10*num2-5*num3)/1;

    printf("$20 bills:%d",num1);
    printf("$10 bills:%d",num2);
    printf("$5 bills:%d",num3);
    printf("$1 bills:%d",num4);

    return 0;

}