#include <stdio.h>

int main(void) {
    unsigned short a,b;
    unsigned char n;
    scanf("%hhu%hu%hu",&n,&a,&b);
    while (a <= b) {
        printf("%0*hu\n",n,a);
        a++;
    }
    return 0;
}
