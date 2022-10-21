#include <stdio.h>
#include <cs50.h>
float discount(float price);
int main(void)
{
    float regular = get_float("regular price : ");
    discount(regular);
}
float discount(float price)
{
   float sale = price* 0.7;
   printf("sale price is %f \n", sale) ;
   return sale;
}