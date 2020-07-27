#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>
#include<ctype.h>


int main(void)
{
    // Insert Text
    string text = get_string("Text: ");
    int letters = 0, words = 1, sentences = 0;

    // Loop will allow count letters, words and sentences.
    for (int i = 0; i < strlen(text); i++)
    {

        // Conditions for count on the loop
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;
        }
        else if (text[i] == ' ')
        {
            words++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }

    //  The Coleman-Liau index
    int grade = (0.0588 * (100 * letters / words) - 0.296 * (100 * sentences / words) - 15.8);

    // Level check loop and response
    if (grade <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade < 16)
    {
        printf("Grade %i\n", grade);
    }
    else
    {
        printf("Grade 16+\n");
    }

}