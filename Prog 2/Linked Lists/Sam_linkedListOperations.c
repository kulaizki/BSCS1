#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};
struct Node* first = NULL;

void create(int A[], int n) // where n is the size
{
  int i;
  struct Node *t, *last;
  first = (struct Node *)malloc(sizeof(struct Node));
  first->data = A[0];
  first->next = NULL;
  last = first;

  for (i = 1; i < n; i++)
  {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}

void Display(struct Node *p)
{
  while (p != NULL)
  {
    printf("%d ", p->data);
    // printf("%d\n", p->next);
    p = p->next; // even if we pass first here, it will not change for some reason
  }
  printf("\n");
}

void recursiveDisplay(struct Node *p)
{
  if (p != NULL)
  {
    recursiveDisplay(p->next);
    printf("%d ", p->data);
  }
}

int countNodes(struct Node *p)
{
  int i = 0;

  while (p != NULL)
  {
    i++;
    p = p->next;
  }

  return i;
}

int getSumNodes(struct Node *p)
{
  int sum = 0;

  while (p != NULL)
  {
    sum += p->data;
    p = p->next;
  }

  return sum;
}

int getMaxNodes(struct Node *p)
{
  int max = p->data;

  while (p != NULL)
  {
    if (p->data > max)
      max = p->data;

    p = p->next;
  }

  return max;
}

struct Node *LSearch(struct Node *p, int key)
{
  while (p != NULL)
  {
    if (key == p->data)
      return p;

    p = p->next;
  }

  return NULL;
}

struct Node *LSearchAndMoveToFront(struct Node *p, int key)
{
  struct Node *q;

  while (p != NULL)
  {
    if (key == p->data)
    {
      q->next = p->next;
      p->next = first;
      first = p;
      return p;
    }
    q = p;
    p = p->next;
  }

  return NULL;
}

void insert(struct Node *p, int index, int x)
{
  struct Node *t;
  int i;

  if (index < 0 || index > countNodes(p))
    return;

  t = (struct Node *)malloc(sizeof(struct Node));
  t->data = x;

  if (index == 0)
  {
    t->next = first;
    first = t;
  }
  else
  {
    for (i = 0; i < index - 1; i++)
      p = p->next;

    t->next = p->next;
    p->next = t;
  }
}

void insertFront(struct Node *p, int x)
{
  struct Node *t = (struct Node *)malloc(sizeof(struct Node));

  t->data = x;
  t->next = first;
  first = t;
}

void sortedInsert(struct Node *p, int x)
{
  struct Node *t, *q = NULL;
  t = (struct Node *)malloc(sizeof(struct Node));
  t->data = x;
  t->next = NULL;

  if (first == NULL)
    first = t;
  else
  {
    while (p != NULL && p->data < x)
    {
      q = p;
      p = p->next;
    }

    if (p == first)
    {
      t->next = first;
      first = t;
    }
    else
    {
      t->next = q->next;
      q->next = t;
    }
  }
}

int delete(struct Node *p, int index)
{
  struct Node *q = NULL;
  int x = -1, i;

  if (index < 1 || index > countNodes(p))
    return -1;

  if (index == 1)
  {
    q = first;
    x = first->data;
    first = first->next;
    free(q);
    return x;
  }
  else
  {
    for (i = 0; i < index - 1; i++)
    {
      q = p;
      p = p->next;
    }
    q->next = p->next;
    x = p->data;
    free(p);
    return x;
  }
}

int isSorted(struct Node *p)
{
  int x = 0;

  while (p != NULL)
  {
    if (p->data < x)
      return 0;

    x = p->data;
    p = p->next;
  }
  return 1;
}

void removeDuplicate(struct Node *p)
{
  struct Node *q = p->next;

  while (q != NULL)
  {
    if (p->data != q->data)
    {
      p = q;
      q = q->next;
    }
    else
    {
      p->next = q->next;
      free(q);
      q = p->next;
    }
  }
}

void Reverse1(struct Node *p) // shifting p->data to reverse linked
{
  int *A, i = 0;
  struct Node *q = p;

  A = (int *)malloc(sizeof(int) * countNodes(p));

  while (q != NULL)
  {
    A[i] = q->data;
    q = q->next;
    i++;
  }

  q = p;
  i--;

  while (q != NULL)
  {
    q->data = A[i];
    q = q->next;
    i--;
  }
}

void Reverse2(struct Node *p) // shifting links with sliding pointers
{
  struct Node *q = NULL, *r = NULL;

  while (p != NULL)
  {
    r = q;
    q = p;
    p = p->next;
    q->next = r;
  }
  first = q;
}

void Reverse3(struct Node *q, struct Node *p) // recursive reversing with sliding pointers
{
  if (p)
  {
    Reverse3(p, p->next);
    p->next = q;
  }
  else
    first = q;
}

int main(void)
{
  int A[] = {3,5,7};
  create(A, 3);
  printf("First: %d\n", first->data);
  insert(first, 0, 10);
  insert(first, 1, 20);
  insert(first, 2, 10);
  insert(first, 3, 10);
  insert(first, 4, 40);
  insertFront(first, 5);
  sortedInsert(first, 25);
  sortedInsert(first, 45);

  Display(first);

  // delete(first, 4);

  // Display(first);

  // printf("%d\n", isSorted(first));

  // removeDuplicate(first);
  // Display(first);
  // printf("\n");

  // printf("First: %d\n", first);

  // recursiveDisplay(first);
  // printf("\n");

  // int count = countNodes(first);
  // printf("COUNT: %d\n", count);

  // int sum = getSumNodes(first);
  // printf("SUM: %d\n", sum);

  // int max = getMaxNodes(first);
  // printf("MAX: %d\n", max);

  // struct Node *temp;
  // temp = LSearch(first, 25);
  // temp = LSearchAndMoveToFront(first, 25);
  // temp = LSearchAndMoveToFront(first, 32);
  // if(temp)
  //   printf("Key is found %d\n", temp->data);
  // else
  //   printf("Key is not found\n");

  // Display(first);

  return 0;
}
