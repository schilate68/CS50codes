#include <stdio.h>
#include <cs50.h>

int main(void)
{
    /* Ask for name and print it*/

    string name = get_string("What is your name please?\n");

    printf("hello, %s\n", name);

}
