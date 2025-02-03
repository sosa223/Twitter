#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 140

int main() {
    char tweet[MAX_LENGTH + 4]; 
    int length;

    printf("Enter your message: ");
    fgets(tweet, sizeof(tweet), stdin);

    length = strlen(tweet);

    if (length > MAX_LENGTH) {
        printf("Rejected");
    } else {
        printf("Posted");
    }

    return 0;
}
