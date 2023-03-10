#include <stdio.h>

typedef struct {
    char fname[24];
    char MI;
    char lname[14];
} nameType;

typedef struct {
    nameType name;
    int ID;
    int age;
    char gender;
} studType;

typedef struct {
    studType S[3];
    int count;
} studList;

int main() {

    studList list = {
        {
            {
                {"Fitzsixto Angelo 1", 'L', "Singh"},
                20103994,
                20,
                'M'
            },
            {
                {"Fitzsixto Angelo 2", 'L', "Singh"},
                20103995,
                20,
                'M'
            },
            {
                {"Fitzsixto Angelo 3", 'L', "Singh"},
                20103996,
                20,
                'M'
            },
        }, 
        3
    };

    int n = list.count;

    for (int i = 0; i < n; ++i) {
        printf("\nName: %s %c. %s\n", 
                list.S[i].name.fname,
                list.S[i].name.MI,
                list.S[i].name.lname);
        printf("ID: %d\n", list.S[i].ID);
        printf("Age: %d\n", list.S[i].age);
        printf("Gender: %c\n", list.S[i].gender);
    }
}