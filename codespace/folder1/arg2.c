#include <stdio.h>
#include <cs50.h>
int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Missing command line");
        return 1132;
    }
    else{
        printf("hello, %s\n", argv[1]);
        return 0;
    }
}