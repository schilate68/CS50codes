#include <cs50.h>
#include <stdio.h>


int years;
int totalSize;

int main(void)
{
    // TODO: Prompt for start size
    int size;
    do
    {
        size = get_int("Please enter the starting size: ");
    }
    while (size < 9);

    // TODO: Prompt for end size
    int endingSize;
    do
    {
        endingSize = get_int("Please enter the ending size: ");
    }
    while (endingSize < size);

    // TODO: Calculate number of years until we reach threshold

    totalSize = size;

    while (totalSize < endingSize)
    {
        if (totalSize >= endingSize)
        {
            return 1;
        }
        else
        {
            totalSize = totalSize + totalSize/3 - totalSize/4;
            years ++;
        }

    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}
