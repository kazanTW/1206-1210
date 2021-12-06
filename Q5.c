#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv) {
    char ch;

    ch = getchar();

    if (isupper(ch) != 0) {
        printf("%s\n", "uppercase");
    }
    else if (islower(ch) != 0) {
        printf("%s\n", "lowercase");
    }
    else {
        printf("%s\n", "special character");
    }

    return 0;
}