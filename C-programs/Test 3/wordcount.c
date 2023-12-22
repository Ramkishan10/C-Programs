#include <stdio.h>
#include <string.h>

void justifySentence(char sentence[], int screenLength) {
    int wordCount = 0;
    char *token = strtok(sentence, " ");
    
    
    while (token != NULL) {
        wordCount++;
        token = strtok(NULL, " ");
    }

    
    int spacesToFill = screenLength - strlen(sentence) + wordCount - 1;
    

    int starsBetweenWords = spacesToFill / (wordCount - 1);
    
    
    int remainingStars = spacesToFill % (wordCount - 1);

    
    token = strtok(sentence, " ");
    while (token != NULL) {
        printf("%s", token);
        if (wordCount > 1) {
            for (int i = 0; i < starsBetweenWords; ++i) {
                printf("*");
            }
            if (remainingStars > 0) {
                printf("*");
                remainingStars--;
            }
        }
        token = strtok(NULL, " ");
        wordCount--;
    }
}

int main() {
    char sentence[1000];
    int screenLength;


    printf("Enter the sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';  
    printf("Enter the screen length: ");
    scanf("%d", &screenLength);

    
    printf("Justified Sentence:\n");
    justifySentence(sentence, screenLength);

    return 0; 
}

