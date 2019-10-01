#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct passwd {
    char* text;
    _Bool Num,Let;
    short len;
};

int main(void){
    struct passwd pass_;
    register unsigned int i;
    char str[1000];
    
    pass_.text = str;
    fgets(str, sizeof(str), stdin);
    
    pass_.len = strlen(pass_.text);
    pass_.text[pass_.len--] = 0;
    
    for (i=0; i<=pass_.len; i++)
        pass_.text[i] = tolower(pass_.text[i]);
    
    if (pass_.len < 6) {
        printf("Invalid");
        return 0;
    }
    
    for (i=0; i<pass_.len; i++) {
        if (pass_.text[i] <= 'z'  &&  pass_.text[i] >= 'a') {
            pass_.Let = 1;
        } else {
            if (pass_.text[i] <= '9'  &&  pass_.text[i] >= '0') {
            pass_.Num = 1;
            }
        }
    }
    
    if (!(pass_.Num&pass_.Let)) {
        printf("Invalid");
        return 0;
    }
    
    pass_.len -= 2;
    
    for (i=0; i<pass_.len; i++) {
        if ((pass_.text[i] == pass_.text[i+1]) && (pass_.text[i] == pass_.text[i+2])) {
            printf("Invalid");
            return 0;
        }
    }
    
    printf("Valid");
    return 0;
}
