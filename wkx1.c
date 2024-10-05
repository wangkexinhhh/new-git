/* output1.c */
#include<stdio.h>
int main()
{
    int i;
    float x;

    i=43;
    x=839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n",i,i,i,i);
    printf("|%11.3f|%11.3e|%-11.3g|\n",x,x,x);
    printf("|%o|%5x|%-5o|\n",i,i,i);

    return 0;
}