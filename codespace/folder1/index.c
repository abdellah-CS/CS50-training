#include <stdio.h>
#include <cs50.h>
int main(void)
{
    printf("complete the following statements :");
    float B1 = get_float("B1 : ");
    float B2 = get_float("B2 : ");
    printf("the surface is : %f \n" ,B1*B2);
}