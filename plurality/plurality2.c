         //including libraries
#include <stdio.h>
#include <cs50.h>
#include <string.h>

#define MAX 9
          //functions
typedef struct
{
    string name;
    int votes;
}candidate;

candidate candidates[MAX];

int candidate_count;

bool vote(string name);

void print_winner(void);
int main(int argc,string argv[])
{
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]");
        return 1;
    }
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is 9\n");
        return 2;
    }
    for (int i = 0;i <= candidate_count; i += 1)
    {

        candidates[i].name = argv[i+1];
        candidates[i].votes = 0;
    }
    int nv = get_int("The number of voters : ");
    for (int i = 0; i < nv; i +=  1)
    {
        string names = get_string("Vote : ");
        if (!vote(names))
        {
            printf("Invalid vote");
        }
    }
    print_winner();
}

bool vote(string name)
{
    for (int i = 0;i <= candidate_count; i += 1)
    {
        if(strcmp(candidates[i].name , name) == 0)
        {
            candidates[i].votes += 1;
            return true;
        }
    }
        return false;


}
void print_winner(void)
{
    int maxvotes =  0;
    for (int i = 0;i <= candidate_count; i += 1)
    {
        if(candidates[i].votes > maxvotes)
        {
            maxvotes = candidates[i].votes;
        }
    }
    for(int i = 0; i <= candidate_count; i ++)
    {
        if(maxvotes == candidates[i].votes)
        {
            printf("Winner %i is : %s\n",i + 1 , candidates[i].name);
        }
        else
        {
            printf("\n");
        }
    }
    return;
}