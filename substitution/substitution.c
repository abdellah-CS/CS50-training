#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command line");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i ++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Usage: ./caesar key ");
            return 1;
        }
    }
    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.");
        return 1;
    }
    string plaintext = get_string("Plain text : ");
    printf("Cipher text : ");
    for (int i = 0 ; i < strlen(plaintext); i += 1)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", argv[1][plaintext[i] - 65]);
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", argv[1][plaintext[i] - 97]);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}