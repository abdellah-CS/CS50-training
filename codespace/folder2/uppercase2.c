#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
int main(void)
{
    string text = get_string("Before : ") ;
    printf("After : ");
    for (int i = 0 ; text[i] != '\0' ; i += 1)
    {
        if (islower(text[i]) = 0)
        {
            printf("%c", tolower(text[i])) ;
        }
        else
        {
            printf("%c", text[i]) ;
        }
    }
    printf("\n") ;
}