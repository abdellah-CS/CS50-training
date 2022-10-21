#include <cs50.h>
#include <stdio.h>
int get_length(string v);
int main(void)
{
    //the same code as length.c from folder1
    string text =get_string("text : ");
    printf("Length : %d \n",get_length(text));
}
int get_length(string v)
{
    int i = 0;
    while(v[i] != '\0')
    {
        i += 1;
    }
    return i;
}