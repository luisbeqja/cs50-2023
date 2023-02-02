#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numberPopulationStart, numberPopulationEnd;
    int numberOfDay = 0;

    do
    {
        numberPopulationStart = get_int("Start size: ");
    } while (numberPopulationStart < 9);

    do
    {
        numberPopulationEnd = get_int("End size: ");
    } while (numberPopulationEnd < numberPopulationStart);

    if (numberPopulationStart != numberPopulationEnd)
    {
        do
        {
            numberPopulationStart = numberPopulationStart + (numberPopulationStart / 3) - (numberPopulationStart / 4);
            ++numberOfDay;
        } while (numberPopulationStart < numberPopulationEnd);
    }

    // TODO: Calculate number of years until we reach threshold

    printf("Years: %i\n", numberOfDay);
    // TODO: Print number of years
}
