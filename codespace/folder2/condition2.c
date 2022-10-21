#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int i = get_int("x : ");
    switch(i)
    {
        case 5 :
            printf("five \n");
            break ;
        case 4 :
            printf("four \n");
            break ;
        case 3 :
            printf("three \n");
            break ;
        case 2 :
            printf("two \n");
            break ;
        case 1 :
            printf("one \n");
            break ;
        default :
            printf("sorry \n");   
    }
}