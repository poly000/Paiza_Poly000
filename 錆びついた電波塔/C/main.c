#include <stdio.h>
#include <stdint.h>

int main(void) {
    register uint_fast8_t n = 0;
    uint_fast8_t temp,i;
    scanf("%hhu",&i);
    while (i--) {
        scanf("%hhu",&temp);
        if (temp > 5) n++;
    }
    printf("%hhu",n);
    return 0;
}
