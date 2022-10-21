          //include libraries
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main(void)
{
           //inputs
    string text = get_string("text : ");
    int letters =0;
    int words = 1;
    int sentences =0;
           // operation
    for(int i =0; i < strlen(text);  i+= 1)
    {
        if(isalpha(text[i]) != '\0')
        {
            letters += 1;
        }
        else if(isspace(text[i]) != '\0')
        {
            words ++;
        }
        else if(text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences ++;
        }
    }
    float l = 100/(float)words * (float)letters;
    float s = 100/(float)words * (float)sentences;
    int grade = round(0.0588 * l - 0.296 * s - 15.8);
         //outputs
    if(grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if(grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i \n",grade);
    }
}