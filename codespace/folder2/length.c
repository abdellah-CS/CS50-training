      // include libraries
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main(void)
{
      //inputs
    string text = get_string("text : ");
    int letters = 0;
    int words = 1;
    int sentences = 0;
    //algorithm
    for(int i = 0; i < strlen(text) ;i += 1)
    {
        if(isalpha(text[i]) != '\0')
        {
            letters += 1;
        }
        else if(isspace(text[i]) != '\0')
        {
            words += 1;
        }
        else if(text[i] == '.'  || text[i] == '!' || text[i] == '?')
        {
            sentences+= 1;
        }
    }
       //outputs
        printf("letters : %i , words : %i  , sentences : %i\n",letters,words,sentences);
    float l = ((100/(float)words)*(float)letters);
    printf("l : %f\n",l);
    float s = ((100/(float)words)*(float)sentences);
    printf("s : %f\n", s);
    printf("Grade : %f\n",(round)((0.0588 * l)-(0.296 * s)-(15.8)));
}
