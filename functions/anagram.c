#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram() {
    char s[] = "listen";
    char t[] = "silent";

    if (strlen(s) != strlen(t)) {
        return false;  // If lengths are different, they can't be anagrams
    }

    int count[256] = {0}; // Array for all possible characters (ASCII values)

    // Count occurrences of characters in both strings
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i]]++;  // Increment count for character in s
        count[t[i]]--;  // Decrement count for character in t
    }

    // If all values in count[] are zero, the strings are anagrams
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    if (isAnagram()) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }
    return 0;
}
