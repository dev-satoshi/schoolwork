#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct Node* create_node(int value) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->value = value;
    node->next = NULL;
    return node;
}

struct Node* insert_node(struct Node* head, struct Node* new_node) {
    new_node->next = head;
    return new_node;
}

struct Node* init_random_list(int n, int max) {
    struct Node* head = NULL;
    for (int i = 0; i < n; i++) {
        int val = rand() % max;
        head = insert_node(head, create_node(val));
    }
    return head;
}

void print_list(struct Node* head) {
    for (; head; head = head->next)
        printf("%d ", head->value);
    printf("\n");
}

void free_list(struct Node* head) {
    while (head) {
        struct Node* tmp = head;
        head = head->next;
        free(tmp);
    }
}

void append(struct Node** head, struct Node* node) {
    if (!*head) {
        *head = node;
    } else {
        struct Node* cur = *head;
        while (cur->next) cur = cur->next;
        cur->next = node;
    }
}

struct Node* concat(struct Node* a, struct Node* b) {
    if (!a) return b;
    struct Node* head = a;
    while (a->next) a = a->next;
    a->next = b;
    return head;
}

struct Node* quick_sort(struct Node* head) {
    if (!head || !head->next) return head;

    struct Node *less = NULL, *equal = NULL, *greater = NULL;
    int pivot = head->value;

    while (head) {
        struct Node* next = head->next;
        head->next = NULL;
        if (head->value < pivot)
            append(&less, head);
        else if (head->value > pivot)
            append(&greater, head);
        else
            append(&equal, head);
        head = next;
    }

    less = quick_sort(less);
    greater = quick_sort(greater);
    return concat(concat(less, equal), greater);
}
