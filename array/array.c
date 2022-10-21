#include <stdio.h>
#include <cs50.h>
int set_int(int x);
int main(void)
{
    int  a= 10;
     a = set_int(a);
    printf("x: %d\n",a);
}
int set_int(int x)
{
     x = 22;
     return x;
}
