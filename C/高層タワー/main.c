#include <stdio.h>
#include <string.h>

int main(void) {
    _Bool status;
    unsigned char n;
    char a[16384] = {0},b[102] = {0},*p = a,*q = b,* temp;
    int i,j,k,l;
    
    scanf("%hhu",&n);
    getchar();
    fgets(a,102,stdin);
    while (*++p != '\n')
        continue;
    *p = 0;
    
    while (--n) {
        fgets(b,102,stdin);
        while (*++q != '\n')
            continue;
        *q = 0;
        q = b;
        
        j = strlen(q);
        l = 0;
        for (i=1; i<=j; i++) {
            temp = p-i;
            status = 1;
            for (k=0; k<i; k++) {
                if (*(q+k) != *(temp+k))
                    status = 0;
            }
            if (status) {
                l = i;
            }
        }
        memcpy(p-l,b,sizeof(char)*j);
        while(*p)
            p++;
    }
    printf("%s",a);
    return 0;
}
