#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void transform(char ch);

int main(int argc, char **argv) {
    char ch;

    while (ch = getchar(), ch != '\n') {
        if (isalpha(ch) == 0) {
            putchar(ch);
        }
        else {
            if (islower(ch) != 0) {
                putchar(toupper(ch));
            }
            else if (isupper(ch) != 0) {
                putchar(tolower(ch));
            }
        }
    }
    putchar('\n');

    return 0;
}