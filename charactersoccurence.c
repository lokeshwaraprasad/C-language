#include <stdio.h>

void findCommonCharacters(const char *str1, const char *str2) {
    int count[256] = {0}; // Assuming ASCII characters

    // Count characters in the first string
    for (int i = 0; str1[i] != '\0'; ++i) {
        count[str1[i]]++;
    }

    // Check and print common characters in the second string
    printf("Common characters: ");
    for (int i = 0; str2[i] != '\0'; ++i) {
        if (count[str2[i]] > 0) {
            printf("%c ", str2[i]);
            count[str2[i]]--; // Avoid duplicates
        }
    }
    printf("\n");
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from the input strings
    for (int i = 0; str1[i] != '\0'; ++i) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
    }

    for (int i = 0; str2[i] != '\0'; ++i) {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
    }

    findCommonCharacters(str1, str2);

    return 0;
}
