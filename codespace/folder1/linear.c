#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{
         //inputs
    int numbers[] = {0,2,5,4,7,8,3};
        //linear algorithm
    for (int i = 0; i < 7; i += 1)
    {
        if (numbers[i] == 8)
        {
            printf("number found in array %i\n", i);
            return 0;
        }
    }

        printf("not yet found\n");
        return 1;
}