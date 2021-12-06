#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    char str[256];
    char ch;
    scanf("%s %c", str, &ch);

    bool last_is_normal = false;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ch) {
            putchar(str[i]);
            last_is_normal = true;
        } else if (str[i] == ch) {
            if (last_is_normal == true) {
                putchar('\n');
            }
            last_is_normal = false;
        }
    }
    if (last_is_normal == true) {
        putchar('\n');
    }

    return 0;
}
