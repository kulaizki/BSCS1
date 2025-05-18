#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));
    
    // Generate a random number
    int randomNumber = rand();
    
    // Print the random number
    printf("Random number: %d\n", randomNumber);
    
    return 0;
}
