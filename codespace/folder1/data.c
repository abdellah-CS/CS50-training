#include <stdio.h>
#include <cs50.h>
int main(void)
{
    const int x = get_int("x : ");
    int y = get_int("y : ");
    printf("the result : %.30f \n ",(double) x / (double)y );
}
