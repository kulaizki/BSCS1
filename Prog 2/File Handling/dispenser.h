#ifndef DISPENSER_H
#define DISPENSER_H

typedef struct items 
{
    char nameOfItem[20];
    int numberOfItems;
    int cost;
} SELECT;

int getCount(int userInput);
int getProductCost(int userInput);
int makeSale(int userInput);

#endif // DISPENSER_H