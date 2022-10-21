#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("n : ");
    int scores[ n ];
    
    int result = 0;
    for(int i = 0 ; i < n ; i +=1){
        scores[i] = get_float("score : ");
        result += scores[i];
    }
    printf("Average is : %.30f" , result / (float)n ) ;
    printf("\n");
}

