/******************************************************************************

                            Count the occurrence of each character in the string 
                            example :
                            input : occurrence
                            output : o1c3u1r2e2n1

*******************************************************************************/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CHARS 256

void countOccurrences(const char *str) {
    int count[MAX_CHARS] = {0};
    int length = strlen(str);
    
    // Count occurrences of each character
    for (int i = 0; i < length; i++) {
        count[(int)str[i]]++;
    }
    
    // Print the counts based on the order of occurrence in the input word
    for (int i = 0; i < length; i++) {
        char current = str[i];
        if (count[(int)tolower(current)] > 0) {
            printf("%c%d", tolower(current), count[(int)tolower(current)]);
            count[(int)tolower(current)] = 0; // Mark as counted
        }
    }
}

int main() {
    char input[100];
    
    printf("Enter a word: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove trailing newline from fgets input
    
    printf("Input: %s\n", input);
    printf("Output: ");
    countOccurrences(input);
    
    return 0;
}