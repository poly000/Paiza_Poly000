#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned int score;
    unsigned int id;
    unsigned int w,d,l;
}group;

int main(void) {
    unsigned int n;
    scanf("%u",&n);
    getchar();
    
    group p[n];
    
    update_score(p);
    group * max = max_score(p);
    
    printf("%u %u %u %u %u",max->id, max->score, max->w, max->d, max->l);
    return 0;
}

group * max_score(const group p[const]) {
    group * max = p;
    for (i=1; i<n; i++) {
        if (p[i].score > max->score) {
            max = &p[i];
        }
    }
    return max;
}

void update_score(const group p[]) {
    for (i=0; i<n; i++) {
        p[i].id = i+1;
        p[i].w = p[i].d = p[i].l = p[i].score = 0;
        for (j=0; j<n; j++) {
            switch (getchar()) {
                case 'W':
                    p[i].score += 2;
                    p[i].w++;
                    break;
                case 'D':
                    p[i].score++;
                    p[i].d++;
                    break;
                case 'L':
                    p[i].l++;
                    break;
            }
        }
        getchar();
    }
}
