     //EXO2 partie2
#include <stdio.h>

int main(void)
{
    int A;
    int B;
    int C;
    printf("avant la permutation: \nA = ");
    scanf("%d",&A);
    printf("B = ");
    scanf("%d",&B);
    printf("C = ");
    scanf("%d",&C);
    A = A + B + C;
    B = A - B - C;
    C = A - B - C;
    A = A - B - C;
    getchar();
    printf("aprés la permutation : \n A = %i \n B = %i \n C = %i \n",A,B,C);
}

