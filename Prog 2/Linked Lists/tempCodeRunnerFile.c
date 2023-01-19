
    if (current != NULL)
    {
        struct Node* temp = current->next;
        current->next = newNode;
        newNode->next = temp;
    }