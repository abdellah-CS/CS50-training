#include <stdio.h>
#include <cs50.h>
int main(void){
    int answer = get_int("answer : ");
    switch(answer){
        case 1 :
            printf("correct");
            break ;
        default :
            printf("false");
    }
    printf("\n");
}
