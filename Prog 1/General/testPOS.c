#include <stdio.h>
#include <conio.h>

int main()
{
    char menuOrder[10][20] = {"Mozzarella Pizza", "Pepperoni Pizza", "BBQ Chicken Pizza", "Ultimate Burger", "Supreme Fries",
                       "Mineral water", "Coke", "Orange Juice", "Special Beer", "Special Smoothie"};
    int order = 1;

    printf("You have selected %s", menuOrder[order-1]);
    
}