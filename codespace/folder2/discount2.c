#include <stdio.h>
#include <cs50.h>
float discount(float price , int percentoff);
int main(void){
    float regular = get_float("regular price : ");
    int percent_off = get_int("percent off : ");
    float sale = discount(regular,percent_off);
    printf("sale price is %f \n", sale);
}
float discount(float price , int percentoff){
    float sale = price * percentoff/100 ;
    return sale ;
}
