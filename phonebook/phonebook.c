#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    person people[2];

    people[0].name = "luis";
    people[0].number = "+39 389 666 8719";

    people[1].name = "matteo";
    people[1].number = "+39 389 999 8719";

    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s", people[i].number);
            return 0;
        }
    }
    printf("not found");
    return 1;
}