#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//prototype
int compute_index(int letters, int words, int sentences);

int main(void) {
    int letters = 0;
    int words = 0;
    int sentences = 0;

    // Prompt user for text
    string s = get_string("Text: ");

    //Count letters
    for (int i = 0; i < strlen(s); i++) {
        if (isalpha(s[i])) {
            letters++;
        }
    }

    // Count words
    for (int j = 0; j < strlen(s); j++) {
        if (s[j] == ' ') {
            words++;
        }
    }

    //Count sentences in the text
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '.' || s[i] == '!' | s[i] == '?') {
            sentences++;
        }
    }

    // displays the grade on the basis of index computed
    int index = compute_index(letters, words, sentences);
    if (index < 1) {
        printf("Before Grade 1\n");
    } 
    else if (index <= 16) {
        printf("Grade %i\n", index);
    } 
    else {
        printf("Grade 16+\n");
    }
}
int compute_index(int letters, int words, int sentences) {
    //computes the index
    float words_per_100 = (words + 1) / 100.0;
    float L = letters / words_per_100;
    float S = sentences / words_per_100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    return index;
}