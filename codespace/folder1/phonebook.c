           //including libraries
#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct {
    string contactname;
    string phonenumber;
    string location;
}pb;

int main(void)
{
             //inputs
    pb people[3];
    people[0].contactname = "Abdellah";
    people[0].phonenumber = "0781808297";
    people[0].location = "la Cnep";

    people[1].contactname = "el-Hadj";
    people[1].phonenumber = "0560332859";
    people[1].location = "Salombier";

    people[2].contactname = "Amine";
    people[2].phonenumber = "0654792459";
    people[2].location = "Belfort";
             //linear search algorithm
    for (int i = 0; i < 3; i += 1)
    {
        if(strcmp(people[i].contactname , "Amine") == 0)
        {
            printf("Name :  %s\nPhonenumber : %s\nLocation : %s\n", people[2].contactname,people[2].phonenumber, people[2].location);
            return 0;
        }
    }
    printf("Not found \n");
    return 1;
             //End
}