     //EXO1
#include <stdio.h>
#include <math.h>
int main(void)
{
    float r;
    printf("Donner la valeur du rayon :\n r = ");
    scanf(" %f",&r);
    getchar();
    printf("La surface est : %f", (3.14*pow(r,2)));
}