#ifndef LIST_H
#define LIST_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data);
void append(Node** head, int data);
void printList(Node* head);
void freeList(Node* head);
void bubbleSort(Node* head);

#endif
