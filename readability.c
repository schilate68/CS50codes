#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//Prototype
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int readability(int letters, int words, int sentences);


int main(void)
{
    string text = get_string("Text: ");

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // printf("Letters: %i\n", letters);
    // printf("Words: %i\n", words);
    // printf("Sentences: %i\n", sentences);

    int grade = readability(letters, words, sentences);


    //Print result
    if (grade > 16)
    {
        printf("Grade 16+\n");

    }

    else if (grade <= 0)
    {
        printf("Before Grade 1\n");

    }

    else

    {
        printf("Grade %i\n", grade);

    }

}

int count_letters(string text)
{
    int letters = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if ((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122))
        {
            letters++;
        }
    }

    return letters;


}

int count_words(string text)
{
    int words = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == 32)
        {
            words++;
        }
    }

    return words + 1;
}

int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == 33 || text[i] == 46 || text[i] == 63)
        {
            sentences++;
        }
    }

    return sentences;

}

int readability(int letters, int words, int sentences)
{

    float letterAverage = (float)letters / words * 100;
    float sentenceAverage = (float)sentences / words * 100;

    //Print to Check values
    // printf("letterAverage: %f\n", letterAverage);
    // printf("sentenceAverage: %f\n", sentenceAverage);

    //Coleman-Liau formula for readability

    float index = 0.0588 * letterAverage - 0.296 * sentenceAverage - 15.8;

    return round(index);


}
