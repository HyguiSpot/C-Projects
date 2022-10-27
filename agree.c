#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //OR IS EXPRESSED BY ||
    //TO CHECK EQUAL TO SOMETHING AND SOMETHING ELSE &&
    //Prompt user to agree
    char c = get_char("Do you agree? ");

    //Check if agree
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not Agreed.\n");
    }
}