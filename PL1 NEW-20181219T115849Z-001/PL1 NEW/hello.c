#include<stdio.h>
int main()
{
    int amount,time,rate,si;
    printf("Enter Principle amount = ");
    scanf("\n %d",&amount);
    printf("Enter Time =");
    scanf("\n %d",&time);
    printf("Enter rate =");
    scanf("\n %d",&rate);
    si=(amount*time*rate)/100;
    printf("Simple interest is : %d",si);
    return 0;
}
