#ifndef STATISTICS_H
#define STATISTICS_H

#define TRUE 1
#define FALSE 0

typedef bool Boolean;
typedef struct node *nodePtr;

struct node {
    int item;
    nodePtr next;
};

typedef nodePtr Statistician, DataStore;

Statistician newStatistician();
void destroyStatistician(Statistician *s);
void add(Statistician s, int x);
void remove(Statistician s, int x);
void displayData(Statistician s);
Boolean isEmpty(Statistician s);

int minimum(Statistician s);
int maximum(Statistician s);
int range(Statistician s);
float mean(Statistician s);
float median(Statistician s);
DataStore mode(Statistician s);
float variance(Statistician s);
float standardDeviation(Statistician s);

#endif