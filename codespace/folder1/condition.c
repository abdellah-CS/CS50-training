#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int x = get_int("x = ");
    int y = get_int("y = ");
    printf("so ...");
    getchar();
    if(x<y){
        printf( "x is less than y \n");
    }
    if(x>y){
        printf("x is more than y \n");
    }
    if(x==y){
        printf("x equal y \n");
    }
}
