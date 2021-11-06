#include <stdio.h>
#include <cs50.h>

int main(void)
{
    /* Create stairs similar to Mario*/

    //Prompt user for height
    int height;
    do
    {
        height = get_int("Height: ");
    }

    while (height < 1 || height > 8);

    //Create stairs with nested loop. i is used in the internal loop for left aligned stair.
    for (int i = 1; i <= height; i++)
    {
        for (int y = height - i; y > 0 ; y--)
        {
            printf(" ");
        }

        for (int x = 1; x <= i; x++)

        {
            printf("#");
        }

        printf("\n");
    }

}
