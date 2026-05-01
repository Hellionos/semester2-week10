#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    char buffer[100] = "the quick brown fox jumped over the lazy dog";

    char *argv[10];  // argv is an array of 10 char* pointers
    int argc = 0;    // argc max is 10
    
    // iterate through each character of the string
    // every time you find a space ' ' assign a new token to argv[]
    char *p = buffer;
    while (*p != '\0' && argc < 10) {
        // 1. Save the start of the current word
        argv[argc++] = p;

        // 2. Scan until we hit a space or the end of the string
        while (*p != ' ' && *p != '\0') {
            p++;
        }

        // 3. If we stopped at a space, null-terminate it and move to the next char
        if (*p == ' ') {
            *p = '\0';
            p++;
        }
    }

    // check output for argc,argv
    printf("argc = %d\n",argc);
    for( int k=0; k<argc; k++ ) {
        printf("argv[%d] = %s\n",k,argv[k]);
    }

    return 0;
}