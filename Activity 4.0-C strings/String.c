#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int i, len, vowel, consonant;

    printf("Enter a sentence: ");
    fgets(str, sizeof str, stdin);

    vowel = 0;
    consonant = 0;
    len = strlen(str);

    for (i = 0; i < len; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                str[i] = str[i] - 32;
                vowel++;
            } else
                consonant++;
        }
    }
    printf("String Converted: ");
    puts(str);
    printf("String length: %u ", len);
    printf("\nVowels: %d", vowel);
    printf("\nConsonants: %d", consonant);

    return 0;
}
