#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Type a number: ");

    if (x % 2 == 0)
    {
    printf("Your number is even\n.");
    }
    else
    {
    printf("Your number is odd\n.");
    }
}