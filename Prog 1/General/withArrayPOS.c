#include <stdio.h>
#include <stdlib.h> // this header file is used for the "system("cls")" function.
#include <conio.h> // this header file is used for the "getche()" function.

void printIntro();
int menu();
char successfulOrder();
void printThankyou();

int main()
{
    char orderMenu[10][20] = {"Mozzarella Pizza", "Pepperoni Pizza", "BBQ Chicken Pizza", "Ultimate Burger", "Supreme Fries",
                              "Mineral water", "Coke", "Orange Juice", "Special Beer", "Special Smoothie"};

    double orderPrice[] = {8.99, 8.99, 13.99, 6.99, 4.99, 0.50, 1.00, 1.00, 4.50, 3.50};
    double total = 0;

    int orderFoodDrink[1000];
    double orderQuantity[1000];

    int order, quantity, ctr = 0;
    char start, customer;

    printIntro();
    start = getche();

    if (start != '0')
    {
        // this loop takes input of the customer's orders and stores the data for each food/drink quantity.
        do
        {
            order = menu();
            printf("\nYou have selected [%s].\n", orderMenu[order-1]);
            orderFoodDrink[ctr] = order;

            printf("How many orders of this would you want to make? ");
            scanf("%lf", &orderQuantity[ctr]);
            ctr++;
            customer = successfulOrder();
            
        } while (customer != '0');

        system("cls");
        printf("\nHere is a list of your orders:\n\n");
        printf("=====================================\n");

        // this loop prints all the orders, and gets the total sum of the prices in the orders.
        for (int i = 0; i < ctr; i++)
        {
            double price = orderQuantity[i] * orderPrice[orderFoodDrink[i]-1];
            printf("@ %-3.lf %-20s| $%.2lf\n", 
            orderQuantity[i], orderMenu[orderFoodDrink[i]-1], price);
            total += price;
        }

        printf("=====================================\n");
        printf("%-26s| $%.2lf\n\n", "Total charge:", total);
        printf("Press any key to clear . . .\n");
        getche();
    } 

    printThankyou();

    return 0;
}

// this function prints the intro.
void printIntro()
{
    printf("______________________________________________________________\n");
    printf("--------------------------------------------------------------\n");
    printf("||             ~ ~ WELCOME TO FITZZERIA ~ ~                 ||\n");
    printf("--------------------------------------------------------------\n\n");
    printf("Would you like to place an order?\nPress any key if yes and '0' if no.\n");
}

// this function shows the food and drink menu, and takes the input of the desired order.
int menu()
{
    int select;

    system("cls");

    printf("Here is our delicious menu:\n");
    printf("=============================================================================\n");
    printf("[1]  Mozzarella Pizza\t\t$8.99\t[6]  Mineral water\t\t$0.50\n");
    printf("[2]  Pepperoni Pizza\t\t$8.99\t[7]  Coke\t\t\t$1.00\n");
    printf("[3]  BBQ Chicken Pizza\t\t$13.99\t[8]  Orange Juice\t\t$1.00\n");
    printf("[4]  Ultimate Burger\t\t$6.99\t[9]  Special Beer\t\t$4.50\n");
    printf("[5]  Supreme Fries\t\t$4.99\t[10] Special Smoothie\t\t$3.50\n");
    printf("=============================================================================\n");
    printf("( Enter the indicated number of the food or drink you want to order )\n");
    printf("Example: Mozzarella Pizza, Enter [1]\n\nWhat would you like to order? ");

    scanf("%d", &select);

    return select;
}

// this function asks the customer if they want to order more.
char successfulOrder()
{
    printf("\n\nYour order was successfully made. Would you like to order something else?\n");
    printf("( If yes, press any key. If no, press '0' )\n");

    return getche();
}

// this function prints the ending.
void printThankyou()
{
    system("cls");
    printf("==============================================================\n");
    printf("||          ~ ~ THANK YOU FOR VISITING FITZZERIA ~ ~        ||\n");
    printf("==============================================================\n");
    printf("\n\n");
}