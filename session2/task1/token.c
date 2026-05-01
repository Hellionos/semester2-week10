
#include <stdio.h>
#include <string.h>

int main( void ) {

    char buffer[100] = "the quick brown fox jumped over the lazy dog";   // define a string to process
    const char *delim = " ";
    char *token;


    // Get the first token
    token = strtok(buffer, delim);


    // call strtok() repeatedly to tokenise the string on whitespace " "
    // print out each token 
    while (token != NULL) {
        printf("%s\n", token);
        
        // Subsequent calls must use NULL as the first argument
        token = strtok(NULL, delim);
    }

    return 0;
}