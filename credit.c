#include <cs50.h>
#include <stdio.h>

bool check_validity(long credit_card_number);
bool checksum(long ccn);
void print_credit_card_brand(long ccn);
int find_lenght(long n);

// coding how the program will behave, from it's main core.
int main(void)
{
    long credit_card_number;

    do
    {
        credit_card_number = get_long("Card Number: ");
    }
    while (credit_card_number < 0);

    if(check_validity(credit_card_number))
        print_credit_card_brand(credit_card_number);

    else
    {
        printf("INVALID\n");
    }
}
// checking the lenght of the card and checking the sum for validity
bool check_validity(long credit_card_number)
{
    int len = find_lenght(credit_card_number);
    return (len == 13 || len == 15 || len == 16) && checksum(credit_card_number);
}
// coding how to find the lenght of the card
int find_lenght(long n)
{
    int len;
    for (len = 0; n != 0; n /= 10, len++);
    return len;
}
// calculating the sum / algorithm
bool checksum(long ccn)
{
    int sum = 0;
    int i;
    for (i = 0; ccn != 0; i++, ccn /= 10)
    {
        // if "i" is divisible by 2, add the digit to the sum
        // meaning if the remainder isn't 0 it's an odd number row
        if (i % 2 == 0)
        {
            sum += ccn % 10;
        }
        // else add the off digits, and the digits of numbers with 2 digits individually
        else
        {
            int digit = 2 * (ccn % 10);
            sum += digit / 10 + digit % 10;
        }
    }
    return (sum % 10) == 0;
}
// defining what kind of card the card is what sending results to main progran
void print_credit_card_brand(long ccn)
{

    if((ccn >= 34e13 && ccn < 35e13) || (ccn >= 37e13 && ccn < 38e13))
            printf("AMEX\n");


    else if ((ccn >= 51e14 && ccn < 56e14))
            printf("MASTERCARD\n");


    else if((ccn >= 4e12 && ccn < 5e12) || (ccn >= 4e15 && ccn < 5e15))
        printf("VISA\n");
    

    else
    {
        printf("INVALID\n");
    }
}