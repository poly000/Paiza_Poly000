#include <stdio.h>

typedef struct {
    unsigned char x;
    unsigned char y;
} place;

int main(void) {
    register unsigned short n;
    place now = {0,0},total;
    
    {
        unsigned short temp;
        scanf("%hhu%hhu%hu",&total.x,&total.y,&temp);
        n = temp;
    }
    
    getchar();
    while (n--) {
        switch (getchar()) {
            case 'U':
                now.y++;
                break;
            case 'D':
                now.y--;
                break;
            case 'L':
                now.x--;
                break;
            case 'R':
                now.x++;
                break;
        }
        getchar();
    }

    if (now.y <= total.y && now.y >= 0 && now.x <= total.x && now.x >= 0) {
        printf("valid");
    } else {
        printf("invalid");
    }
    
    return 0;
}
