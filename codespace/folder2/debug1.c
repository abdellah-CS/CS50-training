#include <stdio.h>
#include <cs50.h>
int get_anonym_int(void);
int main(void)
{
    int i = get_anonym_int();
    printf("i is :  %i \n ", i );
}
int get_anonym_int(void)
{
    int n = get_int("your fav num : ");
    if( n < 0 )
    {
        return n * -1 ;
    }
    else
    {
        return n ;
    }
}
