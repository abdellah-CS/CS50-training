#include <stdio.h>
#include <cs50.h>
void loop(int n);
int main(void)
{
    loop(0);
}
void loop( int n )
{
    for(int a = n; a <= 2; a += 1){
        printf("i did it ! \n");
    }
}