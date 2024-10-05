#include <stdio.h>
int main()
{
    float num1,num2,num3,result1,result2,result3;
   
    printf("Enter amout of loan:");
    scanf ("%f",&num1);

    printf(" Enter interest rate: ");
    scanf("%f",&num2);

    printf("Enter monthly payment:");
    scanf("%f",&num3);

   result1=num1-num3+num1*0.01*num2/12;
   result2=result1-num3+result1*0.01*num2/12;
   result3=result2-num3+result2*0.01*num2/12;
   printf("Balance remaining after first payment: %.2f",result1);
   printf("Balance remaining after second payment: %.2f",result2);
   printf("Balance remaining after third payment:%.2f",result3);

   return 0;
}