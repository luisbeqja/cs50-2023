#include <stdio.h>

const int N = 4;

float avarge(int array[]);

int main(void)
{
    int scores[N];

    scores[0] = 100;
    scores[1] = 100;
    scores[2] = 100;
    scores[3] = 90;

    printf("your score is: %f \n", avarge(scores));
}

float avarge(int array[])
{
    float result = 0;

    for (int i = 0; i < N; i++)
    {
        result += array[i];
    }

    return result / N;
}