    //EXO3
#include <stdio.h>
int main(void)
{
    //2000da
    int somme;
    printf("Entrer la somme d'argent : ");
    scanf("%d",&somme);
      //b100 = billet 100
    int b100 = somme / 100;
    somme = somme % 100;
      //b50 = billet 50
    int b50 = somme / 50;
    somme = somme % 50;
      //b10 = billet 10
    int b10 = somme / 10;
    somme = somme % 10;
      //b2 = billet 2
    int b2 = somme / 2;
      //b1 = billet 1
    int b1 = somme % 2;
    printf(" billet 100 = %i \n billet 50 = %i \n billet 10 = %i \n billet 2 = %i \n billet 1 = %i \n",b100,b50,b10,b2,b1);

}