#include <stdio.h>

int main(void) {
    register int ch;
    while ((ch = getchar()) != EOF) {
        putchar(ch);
        getchar();
    }
    return 0;
}
