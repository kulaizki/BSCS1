#include <stdio.h>

typedef struct {
    char fname[26];
    char MI;
    char lname[16]; 
} NameType;

typedef struct {
    NameType name;
    int ID;
    char course[10];
    char gender;
} StudType;

typedef struct {
    StudType S[5];
    int count;
} StudList;

void displayIfFound(StudList list, int ID);

int main() {

    StudList list = {
        {
            {
                {"Fitzsixto Angelo", 'L', "Singh"}, 
                20103994, 
                "BSCS1", 
                'M'
            },
            {
                {"Christian Antonio Iv", 'D', "de Jesus"}, 
                22101295, 
                "BSCS1", 
                'M'
            },
            {
                {"Reece Sergei", 'L', "Lim"}, 
                22100028, 
                "BSCS1", 
                'M'
            },
            {
                {"Samuel Ethan", 'B', "Bonghanoy"}, 
                20103261, 
                "BSCS1", 
                'M'
            },
            {
                {"Philip Isidro", 'G', "Go"}, 
                22100715, 
                "BSCS1", 
                'M'
            }
        },
        5 // count
    };

    int ID;
    printf("Enter ID of student: ");
    scanf("%d", &ID);

    displayIfFound(list, ID);
    
}

void displayIfFound(StudList list, int ID) {

    int x, n = list.count;
    for (x = 0; x < n && list.S[x].ID != ID; ++x) {}
    if (x < n) 
        printf("%s %c. %s\n%s\n%c\n", 
                list.S[x].name.fname, 
                list.S[x].name.MI, 
                list.S[x].name.lname, 
                list.S[x].course, 
                list.S[x].gender
              );
    else
        printf("Student with ID %d is not found in the list\n", ID);

}