#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
int main(void)
{
    string v = get_string("Before : ");
    printf("After : ");
    for(int n = 0 ; v[n] != '\0' ; n += 1 ){
            printf("%c", toupper(v[n]) );
    }
    printf("\n");
}
