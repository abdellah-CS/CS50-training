   //EXO2 partie1
#include <stdio.h>

int main(void)
{
    int A;
    int B;
    printf("avant la permutation: \nA = ");
    scanf("%d",&A);
    printf("B = ");
    getchar();
    scanf("%d",&B);
    A = A + B;
    B = A - B;
    A = A - B;
    getchar();
    printf("aprés la permutation : \n A = %i \n B = %i \n",A,B);
}
