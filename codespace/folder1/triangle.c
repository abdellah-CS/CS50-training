    //include
#include <cs50.h>
#include <stdio.h>
    //functions
bool valid_triangle(int a,int b,int c);
int main(void)
{
    //inputs
    int x = get_int("x : ");
    int y = get_int("y : ");
    int z = get_int("z : ");
    //function
    bool result = valid_triangle(x,y,z);
    //outputs
    printf("The triangle is : %c \n", result);
}
bool valid_triangle(int a,int b,int c)
{
    if(a > 0 && b > 0 && c > 0)
    {
        if(a + b  > c || a + c  > b || b + c > a)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    else
        {
        return false;
        }
}