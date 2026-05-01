#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    char buffer[100] = "The quick brown fox jumped over the lazy dog";

    char **argv; // dynamic array of char*
    int argc = 0;

    // 1. first pass - count argc
    // don't assign argv just locate space ' ' and count tokens
    char *p = buffer;
    int in_word = 0;
    while (*p != '\0') {
        if (*p != ' ' && in_word==0) {
            in_word = 1;
            argc++;
        } else if (*p == ' ') {
            in_word = 0;
        }
        p++;
    }
    // 2. dynamically allocate argv array
    argv = malloc((sizeof(char*)) * argc);
    if (argv == NULL){
        return 1;
    }

    // 3. second pass - allocate and fill argv
  

    // check output for argc,argv
    printf("argc = %d\n",argc);
    for( int k=0; k<argc; k++ ) {
        printf("argv[%d] = %s\n",k,argv[k]);
    }

    // free argv dynamic memory
    free(argv);

    return 0;
}