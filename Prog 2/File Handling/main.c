#include <stdio.h>
#include <string.h>
#include "dispenser.h"

int main()
{
    SELECT list1[4];
    strcpy(list1[0].nameOfItem, "Candy");
    list1[0].numberOfItems = 25;

    printf("list1[0] nameOfItem: %s\n", list1[0].nameOfItem);
    printf("list1[0] numberOfItems: %d\n", list1[0].numberOfItems);

    list1[0].numberOfItems = 24;
    printf("list1[0] numberOfItems: %d\n", list1[0].numberOfItems);
}
