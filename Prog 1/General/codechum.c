#include <stdio.h>

int main(void) {
    char input;
    
    do {
        printf("Enter choice(X/Y): ");
        scanf(" %c", &input);
        if (input == 'X') {
            printf("Exiting...\n");
        }
        else if (input == 'Y')
            printf("Continuing\n"); 
        
    } while(input != 'X');
    
    return 0;
}