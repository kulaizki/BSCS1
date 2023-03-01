#include <stdio.h>

int main() {

    FILE *fpointer;
    fpointer = fopen("dota.txt", "r");
    char single_line[150];

    while (!feof(fpointer)) {
        fgets(single_line, 150, fpointer);
        printf("%s", single_line); // can alo use puts
    }

    fclose(fpointer);
}