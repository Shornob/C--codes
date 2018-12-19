#include <stdio.h>

int main()
{
    int a ;
    printf(" Enter Basic salary of Mr. X : \t");
    scanf( "%d" , &a);



       // med allowance is 30% of basic , house allowance is 40% of basic + total allowance

        printf( " medical allowance is %d  house allowance is %d  total allowance is %d" ,a*20/100 , a*30/100, a+ a*20/100 + a*30/100 );



    return 0;




}
