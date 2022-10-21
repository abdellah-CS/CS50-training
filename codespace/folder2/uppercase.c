#include <stdio.h>
#include <cs50.h>
int main(void){
    string v = get_string("before : ");
    printf("After : ");
    for( int i = 0 ; v[i] != '\0' ; i+= 1 ){
        if(v[i] >= 'a' && v[i] <= 'z ' ){
            printf("%c" , v[i] - 32 );
        }
        else{
            printf("%c" , v[i] );
        }
    }
    printf("\n");
}

