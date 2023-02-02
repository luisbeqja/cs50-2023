#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = { 20,
                      30,
                      50,
                      400,
                      300,
                      320,
                      230,
                      123,
    };

    int n = get_int("number: ");

    for (int i = 0; i < 8; i++){
        if (numbers[i] == n)
        {
            printf("find");
            return 0;
        }
    }
    printf("not founf ");
    return 0;
}