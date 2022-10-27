#include <cs50.h>
#include <stdio.h>

int main(void)
{
int n, i, j, space;

// we code the same pyramid as before. all we need to do next is
// code the gap in between pyramids ("  ")
// followed by the coding of new pyramid, which we only need to do
// the columns for because all of this code should already be inside
// the height code. Highlited with the red dots in this source code
// if it isn't highlighted it's inbetween lines 23 and 38.

do
{
    n = get_int("Height: ");
}
while (n < 1 || n > 8);

for(i = 0; i < n; i++)
{
    for(space = 0; space < n - j - 1; space++)
{
    printf(" ");
}
    for(j = 0; j <= i; j++)
{
    printf("#");
}
    printf("  ");

for(j = 0; j <= i; j++)
{
    printf("#");
}
    printf("\n");
}
}