#include <stdio.h>
#include <cs50.h>
int main(void){
    int count = get_int("count is ");
    for(int i = 0; i < count; i += 1){
        printf("?  ");
    }
    for(int i = 0; i >= count; i-= 1){
        printf(" ?   ");
    }
    printf("\n");
}
