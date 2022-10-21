#include <stdio.h>
#include <cs50.h>
int main(void){
    int count=3;
    do{
        count = get_int("count: ");
    }while(count < 1);
        for(int i = 0; i < count; i += 1){
            
            for(int j = 0;j<count; j+=1){
                printf("#");
            }
        printf("\n");
            }
}
