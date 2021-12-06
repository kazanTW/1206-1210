#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv) {
    char ch;

    while(ch = getchar(), ch != '\n') {
        if (islower(ch) != 0) {
            putchar(ch);
        }
        else {
            if (isupper(ch) != 0) {
                putchar(tolower(ch));
            }
            else {
                putchar(ch);
            }
        }
    }
    putchar('\n');

    return 0;
}