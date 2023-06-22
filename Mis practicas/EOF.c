#include <stdio.h>

int main(void){
    int ch;

    while((ch=getchar()) != EOF) putchar(ch); //while End Of File(EOF) false
    putchar('\n');
    
    return 0;
}