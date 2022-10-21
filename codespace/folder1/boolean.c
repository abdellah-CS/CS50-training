#include <stdio.h>
#include <cs50.h>
int main (void)
{
    char answer = get_char("Do you agree ?");
    if(answer == 'y' || answer == 'Y'){
        printf("yes, i agree !");
    }
    if(answer == 'n' || answer == 'N'){
        printf("no, i'm not !");
    }
    printf("\n");
}
