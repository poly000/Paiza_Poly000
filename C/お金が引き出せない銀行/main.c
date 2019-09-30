#include <stdio.h>

int main(void){
    unsigned int n,w;
    scanf("%u%u",&n,&w);
    n>w ? printf("%u",n-w) : printf("error");
    return 0;
}
