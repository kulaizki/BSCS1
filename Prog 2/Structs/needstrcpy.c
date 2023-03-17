#include <stdio.h>
#include <string.h>

typedef struct {
    char fname[24];
    char MI;
    char lname[16];
} nameType;

int main() {

    nameType name;
    // name.fname = "fitz"; (THIS DOES NOT WORK)
    strcpy(name.fname, "Fitzsixto Angelo");
    printf("%s", name.fname);
}