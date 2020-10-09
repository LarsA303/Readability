#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    int i = 0, letters =0, words = 1, sentences = 0;
    char text[1000];

    printf("text: ");
    gets(text);

    for (text[i]; text[i] != '\0'; i ++)
    {
        if (isalpha(text[i]))
        {
            letters ++;
        }
        if (text[i]== ' ')
        {
            words ++;
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences ++;
        }
    }
/*
    printf("this text includes: %d letters\n", letters);
    printf("%d words\n", words);
    printf("%d sentences\n\n", sentences);
*/
    double avgLetters = ((double)letters/words)*100;
    double avgSentences = ((double)sentences/words)*100;
/*
    printf("Average letters pr. 100 words: %lf\n", avgLetters);
    printf("Average sentences pr. 100 words: %lf\n\n", avgSentences);
*/

    float index = 0.0588 * avgLetters - 0.296 * avgSentences - 15.8;
    int indexInt = index;
//    printf("index is exactly %lf\n", index);
    if (index < 1){
        printf("\nbefore grade 1\n");
    }
    else if (index >= 16){
        printf("\ngrade 16+\n");
    }
    else{
        printf("\ngrade %0.0lf\n", round(index));
    }

    return 0;
}