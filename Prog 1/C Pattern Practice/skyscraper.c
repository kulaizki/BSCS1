#include <stdio.h>

int main(void)
{
    int height = 0;
    int width = 0;

    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter height: ");
    scanf("%d", &height);

    for(int y = 1; y <= height; y++){
        for(int x = 1; x <= width + 2; x++){

            if(width % 2 == 0){ //prints the top of the skyscraper if width is even
                if(y == 1){
                    if(x == (width +2)/2) { //prints when the loop has reached the middle of the width
                        printf("**");
                    }
                    else{
                        printf(" ");
                    }
                }
            }
            
            if(width % 2){ //prints the top of the skyscraper if width is odd
                if(y == 1){
                    if(x == (width +2)/2 + 1) { //prints when the loop has reached the middle of the width
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }
            }

            if(y != 1 && y != height){ //prints the body of the skyscraper
                if(x == 1 || x == width + 2){ //prints a space at the sides of the body
                    printf(" ");
                }
                else{
                    printf("*");
                }
            }

            if(y == height){ //prints the base of the skyscraper
                if(x == 1 || x == width + 2){ // adds asterisks at the edges of the base
                    printf("*");
                }
                else{
                    printf("*");
                }
            }
    }
         printf("\n"); //prints the next line
    }

    return 0;
}