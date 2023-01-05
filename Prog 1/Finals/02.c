#include <stdio.h>

char convert2Letter (float rating);

void Main() {

    float connoisseur;

    printf("Mister Connoisseur, please rate my fruit.\n");
    printf("My my, your fruit is : ");
    scanf("%f", &connoisseur);
    printf("FRUWI says... %c", convert2Letter(connoisseur));  
}

char convert2Letter (float rating) {

    char grade[] = "SABC"; // do not change this line of code
    if (rating == 10.0)
        return grade[0];
    if (rating < 10.0 && rating >= 8.0)
        return grade[1];
    if (rating < 8 && rating >= 7)
        return grade[2];
    if (rating < 7)
        return grade[3];    
}
