#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n;
    do
    {
        n = get_int("Start size: ");
    }
    while(n<9);

    // TODO: Prompt for end size
    int en;
    do
    {
        en = get_int("End size: ");
    }
    while(en<n);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    while (n < en)
    {
        n = n + (n / 3) - (n / 4);
        years++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}
