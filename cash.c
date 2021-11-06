#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //Prompt user for change owed. Is a float.
    float change;
    do
    {
        change = get_float("Change owed: ");

    }
    while (change <= 0);

    //Convert change and round.
    int cents = round(change * 100);

    //Assigne value to each coin.
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;

    // Keep track of how many coins are used.
    int total = 0;

    //Check every case for each coin starting from the largest to the smallest.

    if (cents / quarter > 0)
    {
        int totalQuarters = cents / quarter;
        cents = cents - (totalQuarters * quarter);
        total += totalQuarters;
    }

    if (cents / dime > 0)
    {
        int totalDimes = cents / dime;
        cents = cents - (totalDimes * dime);
        total += totalDimes;
    }

    if (cents / nickel > 0)
    {
        int totalNickels = cents / nickel;
        cents = cents - (totalNickels * nickel);
        total += totalNickels;
    }

    if (cents / penny > 0)
    {
        int totalPennies = cents / penny;
        cents = cents - (totalPennies * penny);
        total += totalPennies;
    }

    printf("%i\n", total);

}
