#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "list.h"

#define N 20
#define MAX 100

int main() {
    srand(time(NULL));
    struct Node* head = init_random_list(N, MAX);

    printf("Before sort:\n");
    print_list(head);

    clock_t start = clock();
    head = quick_sort(head);
    clock_t end = clock();

    printf("After sort:\n");
    print_list(head);
    printf("Time: %.4f sec\n", (double)(end - start) / CLOCKS_PER_SEC);

    free_list(head);
    return 0;
}
