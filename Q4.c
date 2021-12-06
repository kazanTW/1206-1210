#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv) {
    char str[256] = {""};
    char ch, chTarget;
    char temp1, temp2;

    scanf("%[^\n]", str);
    scanf("%c", &temp1);
    scanf("%c", &ch);
    scanf("%c", &temp2);
    scanf("%c", &chTarget);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ch) {
            putchar(str[i]);
        }
        else if (str[i] == ch) {
            putchar(chTarget);
        }
    }
    putchar('\n');

    return 0;
}