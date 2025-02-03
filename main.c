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
        printf("Rejected\n");
    } else {
        printf("Posted\n");
    }

    return 0;
}
