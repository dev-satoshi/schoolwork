#ifndef LIST_H
#define LIST_H

struct Node {
    int value;
    struct Node* next;
};

struct Node* create_node(int value);
struct Node* insert_node(struct Node* head, struct Node* new_node);
struct Node* init_random_list(int n, int max);
void print_list(struct Node* head);
void free_list(struct Node* head);
struct Node* quick_sort(struct Node* head);

#endif
