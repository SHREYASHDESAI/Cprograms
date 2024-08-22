#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    printf("Enter a sentence: \n");
    
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            ch = tolower(ch); // Convert to lowercase for easy comparison
            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                printf("Vowel: %c\n", ch);
            } else {
                printf("Consonant: %c\n", ch);
            }
        }
    }
    
    return 0;
}
