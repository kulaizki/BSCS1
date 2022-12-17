#include <stdio.h>
#include <string.h>

int main() {

    char user_input[20];
    char smallest_word[20] = "";
    char largest_word[20] = "";

    do {
        printf("Enter word: ");
        gets(user_input);

        if(*smallest_word == 0 && *largest_word == 0) 
            strcpy(largest_word, strcpy(smallest_word, user_input));

        if(strcmp(user_input, largest_word) > 0) 
            strcpy(largest_word, user_input);
    
        else if (strcmp(user_input, smallest_word) < 0)
            strcpy(smallest_word, user_input);
    }
    while(strlen(user_input) != 4);

    printf("\nSmallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);
}

/*
s1[] = "catg";
s2[] = "catfe";
strcmp(s1,s2)
s1 == s2 returns 0
s1 < s2 returns -1
s1 > s2 returns 1
*/