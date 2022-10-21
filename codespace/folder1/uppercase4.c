#include <stdio.h>
#include <cs50.h>
int main(void)
{
    string text = get_string("text : ");
    printf("After : ");
    for(int i = 0; text[i] != '\0'; i += 1 )
    {
        if(text[i] > 96 && text[i] < 122)
        {
            printf("%c",text[i] -32);
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}