#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void printIntro();
int menuOrder();
int successfulOrder();
void printThankyou();

int main()
{
    double mozzarella = 0.0, pepperoni = 0.0, bbq = 0.0, burger = 0.0, fries = 0.0,
           water = 0.0, coke = 0.0, juice = 0.0, beer = 0.0, smoothie = 0.0, price = 0.0, total = 0.0;
    double qty = 0, mozzarellaQty = 0.0, pepperoniQty = 0.0, bbqQty = 0.0, burgerQty = 0.0, friesQty = 0.0,
           waterQty = 0.0, cokeQty = 0.0, juiceQty = 0.0, beerQty = 0.0, smoothieQty = 0.0;

    printIntro();
    int order = getche() - '0';

    while (order)
    {
        switch (menuOrder())
        {
            case 0:
                break;

            case 1:
                printf("\nYou have selected [Mozzarella Pizza].\n");
                printf("How many orders of this would you want to make? ");
                scanf("%lf", &qty);
                mozzarellaQty += qty;
                mozzarella = 8.99;
                total += mozzarella * qty;
                break;

            case 2:
                printf("\nYou have selected [Pepperoni Pizza].\n");
                printf("How many orders of this would you want to make? ");
                scanf("%lf", &qty);
                pepperoniQty += qty;
                pepperoni = 8.99;
                total += pepperoni * qty;
                break;

            case 3:
                printf("\nYou have selected [BBQ Chicken Pizza].\n");
                printf("How many orders of this would you want to make? ");
                scanf("%lf", &qty);
                bbqQty += qty;
                bbq = 13.99;
                total += bbq * qty;
                break;

            case 4:
                printf("\nYou have selected [Ultimate Burger].\n");
                printf("How many orders of this would you want to make? ");
                scanf("%lf", &qty);
                burgerQty += qty;
                burger = 6.99;
                total += burger * qty;
                break;

            case 5:
                printf("\nYou have selected [Supreme fries].\n");
                printf("How many orders of this would you want to make? ");
                scanf("%lf", &qty);
                friesQty += qty;
                fries = 4.99;
                total += fries * qty;
                break;

            case 6:
                printf("\nYou have selected [Mineral Water].\n");
                printf("How many orders of this would you want to make? ");
                scanf("%lf", &qty);
                waterQty += qty;
                water = 0.5;
                total += water * qty;
                break;

            case 7:
                printf("\nYou have selected [Coke].\n");
                printf("How many orders of this would you want to make? ");
                scanf("%lf", &qty);
                cokeQty += qty;
                coke = 1.0;
                total += coke * qty;
                break;

            case 8:
                printf("\nYou have selected [Orange Juice].\n");
                printf("How many orders of this would you want to make? ");
                scanf("%lf", &qty);
                juiceQty += qty;
                juice = 1.0;
                total += juice * qty;
                break;

            case 9:
                printf("\nYou have selected [Special Beer].\n");
                printf("How many orders of this would you want to make? ");
                scanf("%lf", &qty);
                beerQty += qty;
                beer = 4.5;
                total += beer * qty;
                break;

            case 10:
                printf("\nYou have selected [Special Smoothie].\n");
                printf("How many orders of this would you want to make? ");
                scanf("%lf", &qty);
                smoothieQty += qty;
                smoothie = 3.5;
                total += smoothie * qty;
                break;

            default:
                printf("Invalid Input\nPress any key to try again.\n");
                getche();
                continue;
        }

        order = successfulOrder();
    }

    system("cls");

    if (qty)
    {
        printf("\nHere is a list of your orders:\n\n");
        printf("=====================================\n");

        if (mozzarella)
            printf("@ %-3.lf %-20s| $%.2lf\n", mozzarellaQty, "Mozzarella Pizza", mozzarella * mozzarellaQty);

        if (pepperoni)
            printf("@ %-3.lf %-20s| $%.2lf\n", pepperoniQty, "Pepperoni Pizza", pepperoni * pepperoniQty);

        if (bbq)
            printf("@ %-3.lf %-20s| $%.2lf\n", bbqQty, "BBQ Chicken Pizza", bbq * bbqQty);

        if (burger)
            printf("@ %-3.lf %-20s| $%.2lf\n", burgerQty, "Ultimate Burger", burger * burgerQty);

        if (fries)
            printf("@ %-3.lf %-20s| $%.2lf\n", friesQty, "Supreme Fries", fries * friesQty);

        if (water)
            printf("@ %-3.lf %-20s| $%.2lf\n", waterQty, "Mineral Water", water * waterQty);

        if (coke)
            printf("@ %-3.lf %-20s| $%.2lf\n", cokeQty, "Coke", coke * cokeQty);

        if (juice)
            printf("@ %-3.lf %-20s| $%.2lf\n", juiceQty, "Orange Juice", juice * juiceQty);

        if (smoothie)
            printf("@ %-3.lf %-20s| $%.2lf\n", smoothieQty, "Special Smoothie", smoothie * smoothieQty);

        printf("=====================================\n");
        printf("%-26s| $%.2lf\n\n", "Total charge:", total);
    }

    printThankyou();
}

void printIntro()
{
    printf("______________________________________________________________\n");
    printf("--------------------------------------------------------------\n");
    printf("||             ~ ~ WELCOME TO FITZZERIA ~ ~                 ||\n");
    printf("--------------------------------------------------------------\n\n");
    printf("Would you like to place an order?\nPress any key if yes and '0' if no.\n");
}

int menuOrder()
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
    printf("( Enter [0] to stop ordering )\n");
    printf("Example: Mozzarella Pizza, Enter [1].\n\nWhat would you like to order? ");

    scanf("%d", &select);

    return select;
}

int successfulOrder()
{
    printf("\n\nYour order was successfully made. Would you like to order something else?\n");
    printf("( If yes, press any key. If no, press '0' )\n");

    return getche() - '0';
}

void printThankyou()
{
    printf("\n\n\nPress any key to end the session . . .");
    getche();
    system("cls");
    printf("==============================================================\n");
    printf("||          ~ ~ THANK YOU FOR VISITING FITZZERIA ~ ~        ||\n");
    printf("==============================================================\n");
    printf("\n\n");
}