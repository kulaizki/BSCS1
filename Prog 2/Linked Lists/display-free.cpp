#include <iostream>

using namespace std;

struct Node {
    int value;
    struct Node* next;
};

int main()
{
    struct Node* node1 = new Node;
    node1->value = 7;

    struct Node* node2 = new Node;
    node1->next = node2;
    node2->value = 8;

    struct Node* node3 = new Node;
    node2->next = node3;
    node3->value = 9;
    node3->next = NULL;

    struct Node* current = node1;

    // traverses and displays all the nodes' memory address and value
    while (current != NULL) {
        cout << current << ' ' << current->value << '\n';
        current = current->next;
    }

    // frees all the memory allocated
    current = node1;
    while (current != NULL) {
        struct Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}