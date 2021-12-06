#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char str[256];
    char ch;
    scanf("%s %c", str, &ch);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ch) {
            putchar(str[i]);
        }
        else if (str[i] == ch) {
            if (i != 0) {
                putchar('\n');
            }
            else if (i == 0) {
                continue;
            }
        }
    }
    putchar('\n');
    
    return 0;
}