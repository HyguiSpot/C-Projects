#include <stdio.h>
#include <cs50.h>

int main(void)
{
    const int mypoint = 2;
    int x = get_int("How many points did you lose last week? ");

    if (x < mypoint)
    {
        printf("You lost fewer points than me\n.");
    }
    else if (x == mypoint)
    {
        printf("You lost the same ammount of points as me\n.");
    }
    else
    {
        printf("You lost more points than me\n.");
    }
}