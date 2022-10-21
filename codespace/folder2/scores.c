#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int n = get_int("n : ");
    float score[n];
    float result = 0;
    for(int i = 0; i < n; i += 1)
    {
        score[i]  = get_float("score[%i] : ",i);
        result += score[i];
    }
    printf("Average : %f\n", result / n);
}
