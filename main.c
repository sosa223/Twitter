#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 140

int main() {
    char tweet[144];

    printf("Enter your message: ");
   
    
    fgets(tweet, sizeof(tweet), stdin); 

    int length = strlen(tweet);

    if (tweet[length - 1] == '\n') {
        tweet[length - 1] = '\0';
        length--;
    
    
    }

   
    
    
    if (length <= MAX_LENGTH) {
        printf("Posted\n");
   
    
    } else {
        printf("Rejected\n");
    }

    return 0;
}
