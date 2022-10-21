#include <stdio.h>
#include <cs50.h>
float get_average(int length, float v[]);
int main(void)
{
    int n = get_int("n : ");
    float scores[n];
    for(int i = 0; i < n; i += 1)
    {
        scores[i] = get_float("score[%i] : ", i);
    }
    printf("Average : %.3f \n", get_average(n,scores));
}
float get_average(int length,float v[])
{
    float sum = 0;
    for(int i = 0;i < length;i += 1)
    {
        sum += v[i];
    }
    return sum / length;
}