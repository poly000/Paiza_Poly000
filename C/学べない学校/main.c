#include <stdio.h>

typedef struct {
    unsigned short score;
    int hand;
}person;

int main(void) {
    person a = {0,0},b = {0,0};
    unsigned short n;
    register unsigned short i=0;
    scanf("%hu",&n);
    getchar();
    while (i++ != n) {
        a.hand = getchar();
        getchar();
        b.hand = getchar();
        getchar();
        switch (a.hand) {
            case 'g':
                switch (b.hand) {
                    case 'c':
                        a.score++;
                        break;
                    case 'p':
                        b.score++;
                        break;
                }
                break;
            case 'c':
                switch (b.hand) {
                    case 'g':
                        b.score++;
                        break;
                    case 'p':
                        a.score++;
                        break;
                }
                break;
            case 'p':
                switch (b.hand) {
                    case 'g':
                        a.score++;
                        break;
                    case 'c':
                        b.score++;
                        break;
                }
                break;
        }
    }
    printf("%hu\n%hu",a.score,b.score);
    return 0;
}
