#include <stdio.h>
#include <string.h>
struct passwd {
    char* text;
    short len,status[256];
    _Bool Num,Let;
};
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    
    struct passwd pass_;
    unsigned int i;
    char str[1000];
    pass_.text = str;
    fgets(str, sizeof(str), stdin);
    
    pass_.len = strlen(pass_.text);
    pass_.text[pass_.len--] = 0;
    
    if (pass_.len > 6) {
        printf("Invalid");
        return 0;
    }
    
    for (i=0; i<0x100; i++) {
        pass_.status[i] = 0;
    }
    
    for (i=0; i<pass_.len; i++) {
        pass_.status[(unsigned int)(pass_.text[i])]++;
        if ((pass_.text[i] <= 'Z'  &&  pass_.text[i] >= 'A') || (pass_.text[i] <= 'z'  &&  pass_.text[i] >= 'a')) {
            pass_.Let = 1;
        } else {
            if (pass_.text[i] <= '9'  &&  pass_.text[i] >= '0') {
            pass_.Num = 1;
            } else {
                printf("Invalid");
                return 0;
            }
        }
    }
    
    if (!(pass_.Num&pass_.Let)) {
        printf("Invalid");
        return 0;
    }
    
    for (i=0; i<0x100; i++) {
        if (pass_.status[i] > 2) {
            printf("Invalid");
            return 0;
        }
    }
    
    printf("Valid");
    return 0;
}
