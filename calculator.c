#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Insert a number: ");
    int y = get_int("Insert second numbe: ");
    int z = x + y;
    printf("%i\n", z);
}