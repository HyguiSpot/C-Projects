#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// L averege number of letters per 100 words;
// S average number of sentences per 100 words;
// Go to CS50 Manual Pages, you will find all the libraries you need
// Fairly simple program if you find the commands in the library
// Get string from the user "Text"
// Cout the number of letters first, it's the easiest one.
// To count them just use "isalpha(text[i])"
// Meaning "if the array of text, i, is "alpha" then letters++"
// Then do the same for sentences and words
// Sentences end in '.' , '!' , '?' so you need to add that
// There is always 1 more word in the text than there is spaces

int number_sentences;
int number_letters;
int number_words;

int main(void)
{
    string text = get_string("Text: ");

    number_sentences = 0;
    number_letters = 0;
    number_words = 1;
    int i = 0;
    int len = strlen(text);

    for (i = 0; i < len; i++)

        if (isalpha(text[i]))
        {
            number_letters++;
        }

        else if (text[i] == ' ')
        {
            number_words++;
        }

        else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            number_sentences++;
        }

    float L = (float) number_letters / (float) number_words * 100;
    float S = (float) number_sentences / (float) number_words * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }

    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
