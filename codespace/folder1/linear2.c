        //include libraries
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
        //inputs
   string names[] = {"abdellah","mohamed","toufik","youcef","akram","yasser","sifou"};
        //linear algorithm
    for (int i = 0; i < 7; i += 1)
    {
        if (strcmp(names[i] , "akram") == 0 )
        {
            printf("name found in array %i\n",i + 1);
            return 0;
        }
    }

        printf("not found\n");
        return 1;
}