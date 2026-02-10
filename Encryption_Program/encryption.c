#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int decision;
    char key[10] = "firefly";
    int keylen = strlen(key);
    char word[500];

    printf("-----Encryption Program-----\n");

    while (1) {

        printf("1-Encryption | 2-Encryption Cracker | 3-Exit:\n");
        scanf(" %d", & decision);
        getchar();

        if (decision == 1) {
            printf("Please enter a sentence: ");
            fgets(word, sizeof(word), stdin);

            word[strcspn(word, "\n")] = '\0';

            for (int i = 0; word[i] != '\0'; i++) {

                word[i] = word[i] + key[i % keylen];
            }

            printf("Encrypted: %s\n", word);
        }
        else if (decision == 2) {
            printf("Enter the encrypted text.: ");
            fgets(word, sizeof(word), stdin);

            // Enter karakterini temizleyelim
            word[strcspn(word, "\n")] = '\0';

            for (int i = 0; word[i] != '\0'; i++) {

                word[i] = word[i] - key[i % keylen];
            }

            printf("Meaning of the Text: %s\n", word);
        }
        else if (decision == 3) {
            return 0;
        }
        else {printf("wrong choice");}

    }


    return 0;





}
