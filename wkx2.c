/* input_output.c */
#include<stdio.h>
int main()
{
    printf("enter a date(mm/dd/yyyy):" )
    scanf("%d/%d/%d",&mm,&dd,&yyyy);

    printf("You entered the date %d%.2d%.2d\n",year,month,day);

    return 0;
}