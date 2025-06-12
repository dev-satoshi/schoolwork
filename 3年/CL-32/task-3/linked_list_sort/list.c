#include <stdio.h>
#include <stdlib.h>
#include "list.h"

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("メモリ確保失敗\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void append(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

void printList(Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void freeList(Node* head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }
}

void bubbleSort(Node* head) {
    if (!head) return;
    int swapped;
    Node* ptr;
    do {
        swapped = 0;
        ptr = head;
        while (ptr->next) {
            if (ptr->data > ptr->next->data) {
                int tmp = ptr->data;
                ptr->data = ptr->next->data;
                ptr->next->data = tmp;
                swapped = 1;
            }
            ptr = ptr->next;
        }
    } while (swapped);
}
